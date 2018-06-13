################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/User/gpio.c \
../Application/User/lighting.c \
../Application/User/main.c \
../Application/User/spi.c \
../Application/User/stm32f4xx_hal_msp.c \
../Application/User/stm32f4xx_it.c \
../Application/User/test.c \
../Application/User/ws2812b.c 

OBJS += \
./Application/User/gpio.o \
./Application/User/lighting.o \
./Application/User/main.o \
./Application/User/spi.o \
./Application/User/stm32f4xx_hal_msp.o \
./Application/User/stm32f4xx_it.o \
./Application/User/test.o \
./Application/User/ws2812b.o 

C_DEPS += \
./Application/User/gpio.d \
./Application/User/lighting.d \
./Application/User/main.d \
./Application/User/spi.d \
./Application/User/stm32f4xx_hal_msp.d \
./Application/User/stm32f4xx_it.d \
./Application/User/test.d \
./Application/User/ws2812b.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/%.o: ../Application/User/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 '-D__weak=__attribute__((weak))' '-D__packed=__attribute__((__packed__))' -DUSE_HAL_DRIVER -DSTM32F407xx -I"C:/Users/eryk6/Desktop/matrix_led_2018/Inc" -I"C:/Users/eryk6/Desktop/matrix_led_2018/Drivers/STM32F4xx_HAL_Driver/Inc" -I"C:/Users/eryk6/Desktop/matrix_led_2018/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"C:/Users/eryk6/Desktop/matrix_led_2018/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"C:/Users/eryk6/Desktop/matrix_led_2018/Drivers/CMSIS/Include"  -Og -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


