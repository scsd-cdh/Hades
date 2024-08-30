/*
 * backplane.h
 *
 * Created: 2024-08-24 3:30:54 PM
 *  Author: Srira
 */ 


#ifndef Backplane_H_
#define Backplane_H_

/* Libraries */
// C Libraries
#include <stdbool.h>
#include <stdlib.h>

// Header Files
#include "../I2C.h"
#include "../Commands.h"

/* Structure */
typedef struct{
	int16_t ADDRESS;
	struct io_descriptor *DEVICE;
	BACKPLANE_COMMAND *COMMAND;
} BACKPLANE;

// Global Variable
bool backplane;
BACKPLANE *backplanePtr;

// Methods
void initBackplane();
void connectToBackplane();
void BackplaneSystemStatus();
void BackplaneHealthCheck();
void BackplaneReadTemperature();
void BackplaneAckCommand();



#endif /* Backplane_H_ */