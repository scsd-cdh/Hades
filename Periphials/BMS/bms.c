#include "bms.h"

void initBMS(){
	// Initialize BMS
	bmsPtr = (BMS *)malloc(sizeof(BMS));
	if (bmsPtr == NULL) {
		bms = false;
	}
	else{
		bms = true;
	}
	bmsPtr->ADDRESS = 0x02;
	
	// Initialize BMS Commands
	bmsPtr->COMMAND = (BMS_COMMAND *)malloc(sizeof(BMS_COMMAND));
	if (bmsPtr->COMMAND == NULL) {
		// Handle allocation failure
		free(bmsPtr);
	}
	bmsPtr->COMMAND->SYSTEM_STATUS = 0x01;
	bmsPtr->COMMAND->HEALTH_CHECK = 0x02;
	bmsPtr->COMMAND->FLAGS = 0x03;
	bmsPtr->COMMAND->POWER_STATUS = 0x04;
	bmsPtr->COMMAND->HEATER_CONTROLLER = 0x05;
	bmsPtr->COMMAND->ACKNOWLEDGE = 0x06;
}

void connectToBMS(){
	I2CConnect(bmsPtr->DEVICE,bmsPtr->ADDRESS);
}

void BMSSystemStatus(){
	I2CSendCommand(bmsPtr->DEVICE,bmsPtr->COMMAND->SYSTEM_STATUS,5);
}

void BMSHealthCheck(){
	I2CSendCommand(bmsPtr->DEVICE,bmsPtr->COMMAND->HEALTH_CHECK,16);
}

void BMSFlags(){
	I2CSendCommand(bmsPtr->DEVICE,bmsPtr->COMMAND->FLAGS,2);
}

void BMSPowerStatus(){
	I2CSendCommand(bmsPtr->DEVICE,bmsPtr->COMMAND->POWER_STATUS,5);
}

void BMSHeaterController(){
	I2CSendCommand(bmsPtr->DEVICE,bmsPtr->COMMAND->HEATER_CONTROLLER,1);
}

void BMSAckCommand(){
	I2CSendCommand(bmsPtr->DEVICE,bmsPtr->COMMAND->ACKNOWLEDGE,2);
}

