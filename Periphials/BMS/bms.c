#include "bms.h"


void connectToBMS(){
	I2CConnect(BMS_descriptor,BMS_Addr);
}

void BMSSystemStatus(){
	uint8_t commad = BMS_SYSTEM_STATUS;
	I2CSendCommand(BMS_descriptor,(uint8_t *) &commad,5);
}

void BMSHealthCheck(){
	uint8_t commad = BMS_HEALTH_CHECK;
	I2CSendCommand(BMS_descriptor,(uint8_t *) &commad,16);
}

void BMSFlags(){
	uint8_t commad = BMS_FLAGS;
	I2CSendCommand(BMS_descriptor,(uint8_t *) &commad,2);
}

void BMSPowerStatus(){
	uint8_t commad = BMS_POWER_STATUS;
	I2CSendCommand(BMS_descriptor,(uint8_t *) &commad,5);
}

void BMSHeaterController(){
	uint8_t commad = BMS_HEATER_CONTROLLER;
	I2CSendCommand(BMS_descriptor,(uint8_t *) &commad,1);
}

void BMSAckCommand(){
	uint8_t commad = BMS_ACKNOWLEDGE;
	I2CSendCommand(BMS_descriptor,(uint8_t *) &commad,2);
}

