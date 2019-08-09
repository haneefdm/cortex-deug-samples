################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Source/main.c 

OBJS += \
./Source/main.o 

C_DEPS += \
./Source/main.d 


# Each subdirectory must supply rules for building sources it contributes
Source/%.o: ../Source/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=softfp -O0 -ffunction-sections -fdata-sections -Wall  -g3 -DCY8C6247BZI_D54 -DDEBUG -DAPP_NAME='"BlinkyLED2_cm4"' -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/devices/include" -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/devices/bsp/COMPONENT_MTB/startup" -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/cmsis/include" -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/drivers/include" -I"/Users/hdm/cypress/vscode/cortex-debug-samples/blink2/BlinkyLED2_mainapp/GeneratedSource" -I"/Users/hdm/cypress/vscode/cortex-debug-samples/blink2/BlinkyLED2_mainapp/Source" -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/drivers/source" -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/devices/bsp/COMPONENT_MTB/startup/cm4_low" -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/devices/bsp/COMPONENT_MTB/startup/cm4_high" -I"/Applications/ModusToolbox_2.0/libraries/psoc6sw-1.2/components/psoc6pdl/devices/bsp/COMPONENT_MTB/linker" -std=gnu11 -mfpu=fpv4-sp-d16 -ffat-lto-objects -g -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


