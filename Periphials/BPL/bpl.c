#include "bpl.h"

void connectToBPL(){
	I2CConnect(BPL_ADDRESS);
}

void BPLSystemStatus(){
	I2CSendCommand(BPL_SYSTEM_STATUS,5);
}

void BPLHealthCheck(){
	I2CSendCommand(BPL_HEALTH_CHECK,16);
}

void BPLReadTemperature(){
	I2CSendCommand(BPL_TEMPERATURE,4);
}

void BPLAckCommand(){
	I2CSendCommand(BPL_TELECOMMAND_ACKNOWLEDGE,2);
}


