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

#define PDS_Addr 0x01


// Header Files
#include "../I2C.h"
#include "../Commands.h"

enum PDS_COMMAND{
	PDS_SYSTEM_STATUS = 0x00,
	PDS_HEALTH_CHECK = 0x01,
	PDS_REBOOT = 0x02,
	PDS_CONVERTER_MONITOR = 0x03,
	PDS_ACKNOWLEDGE = 0x04
};

struct io_descriptor *PDS_descriptor;


// Global Variable
bool pds;


// Methods
void initPDS();
void connectToPDS();
void PDSSystemStatus();
void PDSHealthCheck();
void PDSReboot();
void PDSConverterMonitor();
void PDSAckCommand();


#endif /* PDS_H_ */