/*
 * I2C.c
 *
 * Created: 2024-08-24 2:34:02 PM
 *  Author: Srira
 */ 

#include "I2C.h"


int16_t getSlaveAddress(struct i2c_m_sync_desc *i2c){
	return (i2c->slave_addr & 0x3FF); // Retrieve the I2C Address only
}


//////////////////////////////////////////change me later
int32_t I2CConnect(struct io_descriptor *I2CDevice, int16_t slaveAddress){
	
	// Setup Return Value
	int32_t status;
	
	// Setup I2C descriptor
	status = i2c_m_sync_get_io_descriptor(&I2C_0, &I2CDevice);
	
	if(status != ERR_NONE){
		printf("Error Getting I2C IO Description \n");
		return status;
	}
	
	// Setup Sync Enable
	status = i2c_m_sync_enable(&I2C_0);
	if(status != ERR_NONE){
		printf("Error Getting Sync version of i2c enable \n");
		return status;
	}
	
	// Set the Slave Address
	status = i2c_m_sync_set_slaveaddr(&I2C_0, slaveAddress, I2C_M_SEVEN);
	if(status != ERR_NONE){
		printf("Error Setting the Slave Address \n");
		return status;
	}
	
	return ERR_NONE;
}


int32_t I2CSendCommand(struct io_descriptor *I2CDevice, uint8_t *command, int32_t length){
	// Setup Return Value
	int32_t status;
	uint8_t lastCommand;
	
	status = (io_write(I2CDevice, command, length) == length);	
	if(status != ERR_NONE){
		printf("Error Writing to the Slave Address \n");
		return status;
	}
	
	// Confirm If Correct Command is Correct
	/*lastCommand = I2CReadLastCommand(I2CDevice,length);
	status = !(lastCommand == command);
	if(status != ERR_NONE){
		printf("Command %d not sent, instead %d sent", command, lastCommand);
		return status;
	}*/
	
	return ERR_NONE;
}

/*
int32_t I2CWriteCommand(struct io_descriptor *I2CDevice, uint8_t* command, int32_t length){
	// Setup Return Value
	int32_t status;
	
	// Write to Slave
	status = (io_write(I2CDevice, command, length) == length);
	if(!status != ERR_NONE){
		printf("Error Writing to the Slave Address \n");
		return status;
	}
	return ERR_NONE;
	
}*/

/*
uint8_t I2CReadLastCommand(struct io_descriptor *I2CDevice, int length){
	// Setup Return Values
	int32_t status;
	uint8_t* command = NULL;
	
	// Read Command
	status = (io_read(I2CDevice, command, length) == length);
	if(!status != ERR_NONE){
		printf("Error Reading from the Slave Address \n");
		return 0xFF;
	}
	return *command;
}*/
