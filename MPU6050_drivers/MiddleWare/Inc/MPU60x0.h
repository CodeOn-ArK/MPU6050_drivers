/*
 * MPU60x0.h
 *
 *  Created on: 24-Jun-2021
 *      Author: ark
 */

#ifndef MPU60X0_H_
#define MPU60X0_H_

#include<stdint.h>

#define MPU_ADDR			 0x68		//Set the slave address here

void MPU_Write(uint8_t *data, uint8_t count);
void MPU_Read(uint8_t *data, uint8_t count);


#endif /* MPU60X0_H_ */
