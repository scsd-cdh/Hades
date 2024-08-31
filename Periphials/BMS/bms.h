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

#define BMS_Addr 0x02

enum BMS_COMMAND {
	BMS_SYSTEM_STATUS = 0x01,
	BMS_HEALTH_CHECK = 0x02,
	BMS_FLAGS = 0x03,
	BMS_POWER_STATUS = 0x04,
	BMS_HEATER_CONTROLLER = 0x05,
	BMS_ACKNOWLEDGE = 0x06
};


struct io_descriptor *BMS_descriptor;

// Global Variable
bool bms;

// Tasks
void connectToBMS();
void BMSSystemStatus();
void BMSHealthCheck();
void BMSFlags();
void BMSPowerStatus();
void BMSHeaterController();
void BMSAckCommand();

#endif /* BMS_H_ */