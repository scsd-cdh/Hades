#include "backplane.h"


void connectToBackplane(){
	I2CConnect(backplane_descriptor, BACKPLANE_Addr);
}

void BackplaneSystemStatus(){
	uint8_t commad = BPL_SYSTEM_STATUS;
	I2CSendCommand(backplane_descriptor, &commad,5);
}

void BackplaneHealthCheck(){
	uint8_t commad = BPL_HEALTH_CHECK;
	I2CSendCommand(backplane_descriptor, &commad,16);
}

void BackplaneReadTemperature(){
	uint8_t commad = BPL_TEMPERATURE;
	I2CSendCommand(backplane_descriptor, &commad,4);
}

void BackplaneAckCommand(){
	uint8_t commad = BPL_ACKNOWLEDGE;
	I2CSendCommand(backplane_descriptor, &commad,2);
}


