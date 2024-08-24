/*
 * bpl.h
 *
 * Created: 2024-08-24 3:30:54 PM
 *  Author: Srira
 */ 


#ifndef BPL_H_
#define BPL_H_

/* Libraries */
#include "../I2C.h"
#include "../Commands.h"

/* Constants/Definitions */
#define BPL_ADDRESS 0x02


// Methods
void connectToBPL();
void BPLSystemStatus();
void BPLHealthCheck();
void BPLReadTemperature();
void BPLAckCommand();



#endif /* BPL_H_ */