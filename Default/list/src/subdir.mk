################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../list/src/linkLoop.cpp \
../list/src/singleLinkList.cpp 

OBJS += \
./list/src/linkLoop.o \
./list/src/singleLinkList.o 

CPP_DEPS += \
./list/src/linkLoop.d \
./list/src/singleLinkList.d 


# Each subdirectory must supply rules for building sources it contributes
list/src/%.o: ../list/src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


