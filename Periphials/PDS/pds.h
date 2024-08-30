/*
 * pds.h
 *
 * Created: 2024-08-24 3:33:35 PM
 *  Author: Srira
 */ 


#ifndef PDS_H_
#define PDS_H_

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
	PDS_COMMAND *COMMAND;
} PDS;

// Global Variable
bool pds;
PDS *pdsPtr;


// Methods
void initPDS();
void connectToPDS();
void PDSSystemStatus();
void PDSHealthCheck();
void PDSReboot();
void PDSConverterMonitor();
void PDSAckCommand();


#endif /* PDS_H_ */