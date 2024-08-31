#include "pds.h"

void connectToPDS(){
	I2CConnect(PDS_descriptor, PDS_Addr);
}

void PDSSystemStatus(){
	uint8_t commad = PDS_SYSTEM_STATUS;
	I2CSendCommand(PDS_descriptor, &commad,5);
}

void PDSHealthCheck(){
	uint8_t commad = PDS_HEALTH_CHECK;
	I2CSendCommand(PDS_descriptor, &commad,16);
}

void PDSReboot(){
	uint8_t commad = PDS_REBOOT;
	I2CSendCommand(PDS_descriptor, &commad,1);
}

void PDSConverterMonitor(){
	uint8_t commad = PDS_CONVERTER_MONITOR;
	I2CSendCommand(PDS_descriptor, &commad,3);
}

void PDSAckCommand(){
	uint8_t commad = PDS_ACKNOWLEDGE;
	I2CSendCommand(PDS_descriptor, &commad,2);
}