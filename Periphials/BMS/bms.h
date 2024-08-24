/*
 * bms.h
 *
 * Created: 2024-08-24 3:27:42 PM
 *  Author: Srira
 */ 


#ifndef BMS_H_
#define BMS_H_

/* Libraries */
#include "../I2C.h"

/* Constants/Definitions */
#define BMS_ADDRESS 0x02

// Tasks
void connectToBMS();
void BMSSystemStatus();
void BMSHealthCheck();
void BMSFlags();
void BMSPowerStatus();
void BMSHeaterController();
void BMSAckCommand();

#endif /* BMS_H_ */