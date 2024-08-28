#include "Backplane.h"

void connectToBackplane(){
	I2CConnect(BACKPLANE_ADDRESS);
}

void BackplaneSystemStatus(){
	I2CSendCommand(BACKPLANE_SYSTEM_STATUS,5);
}

void BackplaneHealthCheck(){
	I2CSendCommand(BACKPLANE_HEALTH_CHECK,16);
}

void BackplaneReadTemperature(){
	I2CSendCommand(BACKPLANE_TEMPERATURE,4);
}

void BackplaneAckCommand(){
	I2CSendCommand(BACKPLANE_TELECOMMAND_ACKNOWLEDGE,2);
}


