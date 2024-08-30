/*
 * Commands.h
 *
 * Created: 2024-08-24 2:52:05 PM
 *  Author: Srira
 */ 


#ifndef COMMANDS_H_
#define COMMANDS_H_


// Structure for BPL
typedef struct {
	 int16_t SYSTEM_STATUS;
	 int16_t HEALTH_CHECK; 
	 int16_t TEMPERATURE; 
	 int16_t ACKNOWLEDGE;
}BACKPLANE_COMMAND;

// Structure for PDS 
typedef struct {
	 int16_t SYSTEM_STATUS;
	 int16_t HEALTH_CHECK;
	 int16_t REBOOT;
	 int16_t CONVERTER_MONITOR;
	 int16_t ACKNOWLEDGE;
} PDS_COMMAND;

// Structure for BMS
typedef struct {
	 int16_t SYSTEM_STATUS;
	 int16_t HEALTH_CHECK;
	 int16_t FLAGS;
	 int16_t POWER_STATUS;
	 int16_t HEATER_CONTROLLER;
	 int16_t ACKNOWLEDGE;
} BMS_COMMAND;


#endif /* COMMANDS_H_ */