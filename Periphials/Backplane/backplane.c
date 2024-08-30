#include "backplane.h"

void initBackplane(){
	// Initialize Backplane
	backplanePtr = (BACKPLANE *)malloc(sizeof(BACKPLANE));
	if (backplanePtr == NULL) {
		backplane = false;
	}
	else{
		backplane = true;
	}
	backplanePtr->ADDRESS = 0x00;
	
	// Initialize Backplane Commands
	backplanePtr->COMMAND = (BACKPLANE_COMMAND *)malloc(sizeof(BACKPLANE_COMMAND));
	if (backplanePtr->COMMAND == NULL) {
		// Handle allocation failure
		free(backplanePtr);
	}
	backplanePtr->COMMAND->SYSTEM_STATUS = 0x01;
	backplanePtr->COMMAND->HEALTH_CHECK = 0x02;
	backplanePtr->COMMAND->TEMPERATURE = 0x03;
	backplanePtr->COMMAND->ACKNOWLEDGE = 0x06;
}

void connectToBackplane(){
	I2CConnect(backplanePtr->DEVICE, backplanePtr->ADDRESS);
}

void BackplaneSystemStatus(){
	I2CSendCommand(backplanePtr->DEVICE, backplanePtr->COMMAND->SYSTEM_STATUS,5);
}

void BackplaneHealthCheck(){
	I2CSendCommand(backplanePtr->DEVICE, backplanePtr->COMMAND->HEALTH_CHECK,16);
}

void BackplaneReadTemperature(){
	I2CSendCommand(backplanePtr->DEVICE, backplanePtr->COMMAND->TEMPERATURE,4);
}

void BackplaneAckCommand(){
	I2CSendCommand(backplanePtr->DEVICE, backplanePtr->COMMAND->ACKNOWLEDGE,2);
}


