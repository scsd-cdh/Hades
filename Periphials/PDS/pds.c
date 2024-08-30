#include "pds.h"

void initPDS(){
	// Initialize PDS
	pdsPtr = (PDS *)malloc(sizeof(PDS));
	if (pdsPtr == NULL) {
		pds = false;
	}
	else{
		pds = true;
	}
	pdsPtr->ADDRESS = 0x01;
	
	// Initialize PDS Commands
	pdsPtr->COMMAND = (PDS_COMMAND *)malloc(sizeof(PDS_COMMAND));
	if (pdsPtr->COMMAND == NULL) {
		// Handle allocation failure
		free(pdsPtr);
	}
	pdsPtr->COMMAND->SYSTEM_STATUS = 0x01;
	pdsPtr->COMMAND->HEALTH_CHECK = 0x02;
	pdsPtr->COMMAND->REBOOT = 0x03;
	pdsPtr->COMMAND->CONVERTER_MONITOR = 0x05;
	pdsPtr->COMMAND->ACKNOWLEDGE = 0x06;
}

void connectToPDS(){
	I2CConnect(pdsPtr->DEVICE, pdsPtr->ADDRESS);
}

void PDSSystemStatus(){
	I2CSendCommand(pdsPtr->DEVICE, pdsPtr->COMMAND->SYSTEM_STATUS,5);
}

void PDSHealthCheck(){
	I2CSendCommand(pdsPtr->DEVICE, pdsPtr->COMMAND->HEALTH_CHECK,16);
}

void PDSReboot(){
	I2CSendCommand(pdsPtr->DEVICE, pdsPtr->COMMAND->REBOOT,1);
}

void PDSConverterMonitor(){
	I2CSendCommand(pdsPtr->DEVICE, pdsPtr->COMMAND->CONVERTER_MONITOR,3);
}

void PDSAckCommand(){
	I2CSendCommand(pdsPtr->DEVICE, pdsPtr->COMMAND->ACKNOWLEDGE,2);
}