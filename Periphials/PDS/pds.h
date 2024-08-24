/*
 * pds.h
 *
 * Created: 2024-08-24 3:33:35 PM
 *  Author: Srira
 */ 


#ifndef PDS_H_
#define PDS_H_

/* Libraries */
#include "../I2C.h"
#include "../Commands.h"

/* Constants/Definitions */
#define PDS_ADDRESS 0x01

// Methods
void connectToPDS();
void PDSSystemStatus();
void PDSHealthCheck();
void PDSReboot();
void PDSConverterMonitor();
void PDSAckCommand();


#endif /* PDS_H_ */