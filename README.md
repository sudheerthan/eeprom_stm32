# eeprom_stm32
example of eproom read and write in internal eeprom of stm32 


this is example from NUCLEO-L152RE board which has 6KB of internal EEPROM , this function belongs to just read and write in same address location of eeprom memory
if write to eeprom we must unlock the flash memory. and after write we must lock it again for to protect it.

to unlock the data EEPROM block 
  write PEKEY1 and PEKEY2
after lock the flash by set the PELOCK BIT in FLASH_PECR
