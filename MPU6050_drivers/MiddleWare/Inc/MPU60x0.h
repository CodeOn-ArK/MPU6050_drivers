/*
 * MPU60x0.h
 *
 *  Created on: 24-Jun-2021
 *      Author: ark
 */

#ifndef MPU60X0_H_
#define MPU60X0_H_

#include<stdint.h>

/*************************************************************/
#define MPU_ADDR					0x68		//Set the slave address here
#define MPU_ADDR_ALT				0x69

#define SAMPLE_RATE_DIVIDER			0x19
#define CONFIG_REG					0x1A
#define GYRO_CONFIG					0x1B
#define ACCEL_CONFIG				0x1C
#define FIFO_ENABLE					0x23
#define INT_PIN_CONFIG				0x37
#define INT_ENABLE					0x38
#define INT_STATUS					0x3A
#define ACCEL_XOUT_H				0x38
#define ACCEL_XOUT_L				0x3C
#define ACCEL_YOUT_H				0x3D
#define ACCEL_YOUT_L				0x3E
#define ACCEL_ZOUT_H				0x3F
#define ACCEL_ZOUT_L				0x40
#define TEMP_OUT_H					0x41
#define TEMP_OUT_L					0x42
#define GYRO_XOUT_H					0x43
#define GYRO_XOUT_L					0x44
#define GYRO_YOUT_H					0x45
#define GYRO_YOUT_L					0x46
#define GYRO_ZOUT_H					0x47
#define GYRO_ZOUT_L					0x48
#define SIG_PATH_RESET				0x68
#define USER_CTRL					0x6A
#define PWR_MGMNT_1					0x6B
#define PWR_MGMNT_2					0x6C
#define FIFO_COUNT_H				0x72
#define FIFO_COUNT_L				0x73
#define FIFO_R_W					0x74
#define WHO_AM_I					0x75

//@GFScale Gyro Full Scale
#define GFS_SEL_0					(0x0 << 3)
#define GFS_SEL_1					(0x1 << 3)
#define GFS_SEL_2					(0x2 << 3)
#define GFS_SEL_3					(0x3 << 3)

//@AFScale Accelerometer Full Scale
#define AFS_SEL_0					(0x0 << 3)
#define AFS_SEL_1					(0x1 << 3)
#define AFS_SEL_2					(0x2 << 3)
#define AFS_SEL_3					(0x3 << 3)

//@FIFOEN FIFO Enable Bit Val
#define TEMP_FIFO_EN 				(0x1 << 7)
#define XG_FIFO_EN 					(0x1 << 6)
#define YG_FIFO_EN 					(0x1 << 5)
#define ZG_FIFO_EN 					(0x1 << 4)
#define ACCEL_FIFO_EN 				(0x1 << 3)

//@INTCONFIG Config Vals for INT pin
#define INT_LEVEL					(0x1 << 7)
#define INT_OPEN					(0x1 << 6)
#define LATCH_INT_EN				(0x1 << 5)
#define INT_RD_CLEAR				(0x1 << 4)

//@INTEN Interrupt enabling for INT pin
#define FIFO_OFLOW_EN				(0x1 << 4)
#define	DATA_RDY_EN  				(0x1 << 0)

//@INTSTAT Interrupt Status
#define FIFO_OFLOW_INT				(0x1 << 4)
#define DATA_RDY_INT				(0X1 << 0)

//@RESET
#define GYRO_RESET					(0x1 << 2)
#define ACCEL_RESET					(0x1 << 1)
#define TEMP_RESET					(0x1 << 0)

#define FIFO_EN						(0x1 << 6)
#define FIFO_RESET					(0x1 << 2)
#define SIG_COND_RESET				(0x1 << 0)

#define MGM1_DEV_RESET				(0x1 << 7)
#define MGM1_SLEEP					(0x1 << 6)
#define MGM1_CYCLE_EN				(0x1 << 5)
#define MGM1_TEMP_DIS				(0x1 << 3)

#define MGM1_CLKSEL_0			    0x0
#define MGM1_CLKSEL_1			    0x1
#define MGM1_CLKSEL_2				0x2
#define MGM1_CLKSEL_3				0x3
#define MGM1_CLKSEL_4				0x4
#define MGM1_CLKSEL_5				0x5
#define MGM1_CLKSEL_6				0x6
#define MGM1_CLKSEL_7				0x7

#define MGM2_WAKE_CTRL_0			(0x0 << 6)
#define MGM2_WAKE_CTRL_1			(0x1 << 6)
#define MGM2_WAKE_CTRL_2			(0x2 << 6)
#define MGM2_WAKE_CTRL_3			(0x3 << 6)

#define MGM2_STBY_XA				(0x1 << 5)
#define MGM2_STBY_YA				(0x1 << 4)
#define MGM2_STBY_ZA				(0x1 << 3)
#define MGM2_STBY_XG				(0x1 << 2)
#define MGM2_STBY_YG				(0x1 << 1)
#define MGM2_STBY_ZG				(0x1 << 0)

/*************************************************************/
typedef struct{
	uint8_t X_Raw_H;
	uint8_t X_Raw_L;
	uint8_t Y_Raw_H;
	uint8_t Y_Raw_L;
	uint8_t Z_Raw_H;
	uint8_t Z_Raw_L;

	uint16_t X_Final;
	uint16_t Y_Final;
	uint16_t Z_Final;

}Cord_RegDef_t ; //Co-Ordinates Register Definition

typedef struct{
	uint8_t H_Raw;
	uint8_t L_Raw;

	uint16_t NetTemp;
}Temp_RegDef_t;

/*************************************************************/
void MPU_Write(uint8_t *data, uint8_t count);
void MPU_Read(uint8_t *data, uint8_t count);

void MPU_Sample_Rate_Divider(uint8_t divval);
void MPU_Config_Register(uint8_t ConfigVal);
void MPU_Gyro_FullScale_Selection(uint8_t Scale);
void MPU_Accel_FullScale_Selection(uint8_t Scale);
void MPU_FIFO_Enable(uint8_t BitVal);				//Accepts bit values of the sensors, for which FIFO needs to be enabled
void MPU_Interrupt_Pin_Config(uint8_t BitVal);
void MPU_Interrupt_Enable(uint8_t BitVal);
uint8_t MPU_Get_Interrupt_Status(uint8_t Flag);			//Checks the given flag with the flag register of the InterruptStatus Register
Cord_RegDef_t MPU_Get_Accel_value(void);
Cord_RegDef_t MPU_Get_Gyro_value(void);
Temp_RegDef_t MPU_Get_Temp(void);
void MPU_Sig_Path_Reset(uint8_t whom_to_reset);
void MPU_User_Control(uint8_t BitVal);
void MPU_Power_Manager(uint8_t BitVal, uint8_t RegNo);
uint16_t MPU_Get_FIFO_Count(void);
uint8_t MPU_Get_FIFO_Data(void);
uint8_t MPU_WHO_AM_I(void);

#endif /* MPU60X0_H_ */
