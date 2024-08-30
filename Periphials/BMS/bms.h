/*
 * bms.h
 *
 * Created: 2024-08-24 3:27:42 PM
 *  Author: Srira
 */ 


#ifndef BMS_H_
#define BMS_H_

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
	BMS_COMMAND *COMMAND;
} BMS;

// Global Variable
bool bms;
BMS *bmsPtr;

// Tasks
void initBMS();
void connectToBMS();
void BMSSystemStatus();
void BMSHealthCheck();
void BMSFlags();
void BMSPowerStatus();
void BMSHeaterController();
void BMSAckCommand();

#endif /* BMS_H_ */