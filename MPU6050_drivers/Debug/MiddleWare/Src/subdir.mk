################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MiddleWare/Src/stm32f446xx_gpio.c \
../MiddleWare/Src/stm32f446xx_i2c.c \
../MiddleWare/Src/stm32f446xx_rcc.c 

OBJS += \
./MiddleWare/Src/stm32f446xx_gpio.o \
./MiddleWare/Src/stm32f446xx_i2c.o \
./MiddleWare/Src/stm32f446xx_rcc.o 

C_DEPS += \
./MiddleWare/Src/stm32f446xx_gpio.d \
./MiddleWare/Src/stm32f446xx_i2c.d \
./MiddleWare/Src/stm32f446xx_rcc.d 


# Each subdirectory must supply rules for building sources it contributes
MiddleWare/Src/stm32f446xx_gpio.o: ../MiddleWare/Src/stm32f446xx_gpio.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DDEBUG -DNUCLEO_F446RE -c -I../Inc -I"/home/ark/st/MPU6050_Drivers/MPU6050_drivers/MiddleWare/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MiddleWare/Src/stm32f446xx_gpio.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
MiddleWare/Src/stm32f446xx_i2c.o: ../MiddleWare/Src/stm32f446xx_i2c.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DDEBUG -DNUCLEO_F446RE -c -I../Inc -I"/home/ark/st/MPU6050_Drivers/MPU6050_drivers/MiddleWare/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MiddleWare/Src/stm32f446xx_i2c.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"
MiddleWare/Src/stm32f446xx_rcc.o: ../MiddleWare/Src/stm32f446xx_rcc.c
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DSTM32 -DSTM32F4 -DSTM32F446RETx -DDEBUG -DNUCLEO_F446RE -c -I../Inc -I"/home/ark/st/MPU6050_Drivers/MPU6050_drivers/MiddleWare/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"MiddleWare/Src/stm32f446xx_rcc.d" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

