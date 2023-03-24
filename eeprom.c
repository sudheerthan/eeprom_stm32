/*
 * internal_eeprom.c
 *
 *  Created on: Mar 23, 2023
 *      Author: sudheerthan
 */


#include "eeprom.h"


uint32_t eeprom_read(){

	// Read data from Flash
	uint32_t read_data = *(__IO uint32_t*)DATA_EEPROM_BASE;

	return read_data;
}


void eeprom_write(uint32_t data){
	  // Unlock the Flash memory
	  HAL_FLASH_Unlock();

	  // Write data to Flash
	   HAL_StatusTypeDef status = HAL_FLASH_Program(FLASH_TYPEPROGRAMDATA_WORD, DATA_EEPROM_BASE, data);

	   if (status != HAL_OK)
	   {
		 // Handle write error
	   }

		HAL_FLASH_Lock();
}
