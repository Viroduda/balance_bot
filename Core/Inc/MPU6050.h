#include "../../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal.h"
#include "../../Drivers/STM32F4xx_HAL_Driver/Inc/stm32f4xx_hal_i2c.h"

void MPU6050_init(void); //Initialize the MPU 
void MPU6050_Read_Accel (float *Ax, float *Ay, float *Az); //Read MPU Accelerator 
void MPU6050_Read_Gyro (float *Gx, float *Gy, float *Gz); //Read MPU Gyroscope
