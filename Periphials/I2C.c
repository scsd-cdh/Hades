/*
 * I2C.c
 *
 * Created: 2024-08-24 2:34:02 PM
 *  Author: Srira
 */ 

#include "I2C.h"

void I2CConnect(uint8_t slaveAddress){
	// Configure I2C connection
	i2c_m_sync_get_io_descriptor(&I2CDevice, &I2CDevice);
	i2c_m_sync_enable(&I2CDevice);
	i2c_m_sync_set_slaveaddr(&I2CDevice, slaveAddress, I2C_M_SEVEN);
	
}

void I2CSendCommand(uint8_t command, int length){
	io_write(I2CDevice, command, length);
}
