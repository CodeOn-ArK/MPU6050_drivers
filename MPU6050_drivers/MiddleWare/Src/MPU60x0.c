/*
 * MPU60x0.c
 *
 *  Created on: 24-Jun-2021
 *      Author: ark
 */
#include "MPU60x0.h"
#include "stm32f446xx_i2c.h"

extern I2C_Handle_t I2C2Handle;

void MPU_Write(uint8_t *data, uint8_t count)
{
	I2C_MasterSendData( &I2C2Handle, data, count, MPU_ADDR);
}
void MPU_Read(uint8_t *data, uint8_t count)
{
	I2C_MasterReceiveData(&I2C2Handle, data, count, MPU_ADDR);
}


void mpu_sample_rate_divider(uint8_t divval){

}
void MPU_Config_Register(uint8_t ConfigVal){

}
void MPU_Gyro_FullScale_Selection(uint8_t Scale){

}
void MPU_Accel_FullScale_Selection(uint8_t Scale){

}
void MPU_FIFO_Enable(uint8_t BitVal){			//Accepts bit values of the sensors, for which FIFO needs to be enabled

}
void MPU_Interrupt_Pin_Config(uint8_t BitVal){

}
void MPU_Interrupt_Enable(uint8_t BitVal){

}
uint8_t MPU_Interrupt_Status(uint8_t Flag){  	//Checks the given flag with the flag register of the InterruptStatus Register

}
Cord_RegDef_t MPU_Get_Accel_value(void){

}
Cord_RegDef_t MPU_Get_Gyro_value(void){

}
Temp_RegDef_t MPU_Get_Temp(void){

}
void MPU_Sig_Path_Reset(uint8_t whom_to_reset){

}
void MPU_User_Control(uint8_t BitVal){

}
void MPU_Power_Manager(uint8_t BitVal, uint8_t RegNo){

}
uint16_t MPU_Get_FIFO_Count(void){

}
uint8_t MPU_Get_FIFO_Data(void){

}
uint8_t MPU_WHO_AM_I(void){

}
