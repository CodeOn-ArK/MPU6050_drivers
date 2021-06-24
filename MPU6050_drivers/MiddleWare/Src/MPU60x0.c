/*
 * MPU60x0.c
 *
 *  Created on: 24-Jun-2021
 *      Author: ark
 */
#include "MPU60x0.h"
#include "stm32f446xx_i2c.h"

extern I2C_Handle_t I2C1Handle;

void MPU_Write(uint8_t *data, uint8_t count)
{
	I2C_MasterSendData( &I2C1Handle, data, count, MPU_ADDR);
}
void MPU_Read(uint8_t *data, uint8_t count)
{
	I2C_MasterReceiveData(&I2C1Handle, data, count, MPU_ADDR);
}

