################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../list/.metadata/.plugins/org.eclipse.cdt.make.core/specs.cpp 

C_SRCS += \
../list/.metadata/.plugins/org.eclipse.cdt.make.core/specs.c 

OBJS += \
./list/.metadata/.plugins/org.eclipse.cdt.make.core/specs.o 

CPP_DEPS += \
./list/.metadata/.plugins/org.eclipse.cdt.make.core/specs.d 

C_DEPS += \
./list/.metadata/.plugins/org.eclipse.cdt.make.core/specs.d 


# Each subdirectory must supply rules for building sources it contributes
list/.metadata/.plugins/org.eclipse.cdt.make.core/%.o: ../list/.metadata/.plugins/org.eclipse.cdt.make.core/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

list/.metadata/.plugins/org.eclipse.cdt.make.core/%.o: ../list/.metadata/.plugins/org.eclipse.cdt.make.core/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


