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
#define BACKPLANE_Addr 0x00


enum BACKPLANE_COMMAND{
	BPL_SYSTEM_STATUS = 0x01,
	BPL_HEALTH_CHECK = 0x02,
	BPL_TEMPERATURE = 0x03,
	BPL_ACKNOWLEDGE = 0x06,
};

struct io_descriptor *backplane_descriptor;

// Global Variable
bool backplane;

// Methods
void connectToBackplane();
void BackplaneSystemStatus();
void BackplaneHealthCheck();
void BackplaneReadTemperature();
void BackplaneAckCommand();



#endif /* Backplane_H_ */