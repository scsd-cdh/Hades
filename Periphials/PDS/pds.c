#include "pds.h"

void connectToPDS(){
	I2CConnect(PDS_ADDRESS);
}

void PDSSystemStatus(){
	I2CSendCommand(PDS_SYSTEM_STATUS,5);
}

void PDSHealthCheck(){
	I2CSendCommand(PDS_HEALTH_CHECK,16);
}

void PDSReboot(){
	I2CSendCommand(PDS_REBOOT,1);
}

void PDSConverterMonitor(){
	I2CSendCommand(PDS_CONVERTER_MONITOR,3);
}

void PDSAckCommand(){
	I2CSendCommand(PDS_TELECOMMAND_ACKNOWLEDGE,2);
}