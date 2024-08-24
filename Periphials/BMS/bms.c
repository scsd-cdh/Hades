#include "bms.h"
#include "../Commands.h"


void connectToBMS(){
	I2CConnect(BMS_ADDRESS);
}

void BMSSystemStatus(){
	I2CSendCommand(BMS_SYSTEM_STATUS,5);
}

void BMSHealthCheck(){
	I2CSendCommand(BMS_HEALTH_CHECK,16);
}

void BMSFlags(){
	I2CSendCommand(BMS_FLAGS,2);
}

void BMSPowerStatus(){
	I2CSendCommand(BMS_POWER_STATUS,5);
}

void BMSHeaterController(){
	I2CSendCommand(BMS_HEATER_CONTROLLER,1);
}

void BMSAckCommand(){
	I2CSendCommand(BMS_TELECOMMAND_ACKNOWLEDGE,2);
}

