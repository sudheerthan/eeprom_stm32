/*
 * eeprom.h
 *
 *  Created on: Mar 23, 2023
 *      Author: sudheerthan
 */

#ifndef INC_EEPROM_H_
#define INC_EEPROM_H_

#include "stdint.h"

#define DATA_EEPROM_BASE       (0x08080000UL) /*!< DATA_EEPROM base address in the alias region */
#define FLASH_TYPEPROGRAMDATA_WORD            (0x02U)  /*!<Program a word (32-bit) at a specified address.*/


void eeprom_write(uint32_t data);
uint32_t eeprom_read();

#endif /* INC_EEPROM_H_ */
