/*
 * I2C.h
 *
 * Created: 2024-08-24 2:33:42 PM
 *  Author: Srira
 */ 


#ifndef I2C_H_
#define I2C_H_

/* C Libraries */
#include <stdlib.h>

/* Atmel Libraries */
#include "atmel_start.h" // Atmel Drivers
#include "driver_init.h"
#include "utils.h" 

#ifdef __cplusplus
extern "C" {
#endif
// Variables
struct io_descriptor *I2CDevice; // I2C Address


// Method through I2C
void I2CConnect(uint8_t slaveAddress);
void I2CSendCommand(uint8_t command, int length);

#ifdef __cplusplus
}
#endif
#endif /* I2C_H_ */