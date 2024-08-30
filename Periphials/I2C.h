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
#include <stdio.h>

/* Atmel Libraries */
#include "atmel_start.h" // Atmel Drivers
#include "driver_init.h"
#include "utils.h" 


//Getter Function
int16_t getSlaveAddress(struct i2c_m_sync_desc *i2c); // Return Slave Address

// Functions through I2C
int32_t I2CConnect(struct io_descriptor *I2CDevice, int16_t slaveAddress);
int32_t I2CSendCommand(struct io_descriptor *I2CDevice, uint8_t command, int32_t length);
int32_t I2CWriteCommand(struct io_descriptor *I2CDevice, uint8_t* command, int32_t length);
uint8_t I2CReadLastCommand(struct io_descriptor *I2CDevice, int length);



#endif /* I2C_H_ */