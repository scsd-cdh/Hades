/*
 * backplane.h
 *
 * Created: 2024-08-24 3:30:54 PM
 *  Author: Srira
 */ 


#ifndef Backplane_H_
#define Backplane_H_

/* Libraries */
#include "../I2C.h"
#include "../Commands.h"

/* Constants/Definitions */
#define BACKPLANE_ADDRESS 0x02


// Methods
void connectToBackplane();
void BackplaneSystemStatus();
void BackplaneHealthCheck();
void BackplaneReadTemperature();
void BackplaneAckCommand();



#endif /* Backplane_H_ */