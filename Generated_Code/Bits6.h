/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Bits6.h
**     Project     : ModuleHub
**     Processor   : MKV10Z16VFM7
**     Component   : BitsIO_LDD
**     Version     : Component 01.029, Driver 01.05, CPU db: 3.50.001
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-07-01, 20:53, # CodeGen: 1
**     Abstract    :
**         The HAL BitsIO component provides a low level API for unified
**         access to general purpose digital input/output 32 pins across
**         various device designs.
**
**         RTOS drivers using HAL BitsIO API are simpler and more
**         portable to various microprocessors.
**     Settings    :
**          Component name                                 : Bits6
**          Port                                           : GPIOE
**          Pins                                           : 2
**            Pin0                                         : 
**              Pin                                        : PTE24/FTM0_CH0/I2C0_SCL/EWM_OUT_b
**            Pin1                                         : 
**              Pin                                        : PTE25/FTM0_CH1/I2C0_SDA/EWM_IN
**          Direction                                      : Input/Output
**          Initialization                                 : 
**            Init. direction                              : Output
**            Init. value                                  : 0
**            Auto initialization                          : no
**          Safe mode                                      : no
**     Contents    :
**         Init     - LDD_TDeviceData* Bits6_Init(LDD_TUserData *UserDataPtr);
**         SetDir   - void Bits6_SetDir(LDD_TDeviceData *DeviceDataPtr, bool Dir);
**         SetInput - void Bits6_SetInput(LDD_TDeviceData *DeviceDataPtr);
**         GetVal   - uint32_t Bits6_GetVal(LDD_TDeviceData *DeviceDataPtr);
**         PutVal   - void Bits6_PutVal(LDD_TDeviceData *DeviceDataPtr, uint32_t Val);
**         GetBit   - LDD_TError Bits6_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool...
**         PutBit   - LDD_TError Bits6_PutBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool Val);
**         SetBit   - LDD_TError Bits6_SetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);
**         ClrBit   - LDD_TError Bits6_ClrBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);
**
**     (c) 2012 by Freescale
** ###################################################################*/
/*!
** @file Bits6.h
** @version 01.05
** @brief
**         The HAL BitsIO component provides a low level API for unified
**         access to general purpose digital input/output 32 pins across
**         various device designs.
**
**         RTOS drivers using HAL BitsIO API are simpler and more
**         portable to various microprocessors.
*/         
/*!
**  @addtogroup Bits6_module Bits6 module documentation
**  @{
*/         

#ifndef __Bits6_H
#define __Bits6_H

/* MODULE Bits6. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "IO_Map.h"
#include "GPIO_PDD.h"

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 



/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define Bits6_PRPH_BASE_ADDRESS  0x400FF100U
  
/* Methods configuration constants - generated for all enabled component's methods */
#define Bits6_Init_METHOD_ENABLED      /*!< Init method of the component Bits6 is enabled (generated) */
#define Bits6_SetDir_METHOD_ENABLED    /*!< SetDir method of the component Bits6 is enabled (generated) */
#define Bits6_SetInput_METHOD_ENABLED  /*!< SetInput method of the component Bits6 is enabled (generated) */
#define Bits6_GetVal_METHOD_ENABLED    /*!< GetVal method of the component Bits6 is enabled (generated) */
#define Bits6_PutVal_METHOD_ENABLED    /*!< PutVal method of the component Bits6 is enabled (generated) */
#define Bits6_GetBit_METHOD_ENABLED    /*!< GetBit method of the component Bits6 is enabled (generated) */
#define Bits6_PutBit_METHOD_ENABLED    /*!< PutBit method of the component Bits6 is enabled (generated) */
#define Bits6_SetBit_METHOD_ENABLED    /*!< SetBit method of the component Bits6 is enabled (generated) */
#define Bits6_ClrBit_METHOD_ENABLED    /*!< ClrBit method of the component Bits6 is enabled (generated) */

/* Definition of implementation constants */
#define Bits6_MODULE_BASE_ADDRESS GPIOE_BASE_PTR /*!< Name of macro used as the base address */
#define Bits6_PORTCONTROL_BASE_ADDRESS PORTE_BASE_PTR /*!< Name of macro used as the base address */
#define Bits6_PORT_MASK 0x03000000U    /*!< Mask of the allocated pin from the port */
#define Bits6_PORT_VALID_VALUE_MASK 0x03 /*!< Mask of the allocated pins from the port as the first pin would be zero i.e. valid bits to be set in method PutVal */
#define Bits6_PIN_ALLOC_0_MASK 0x01000000 /*!< Mask of the first allocated pin from the port */
#define Bits6_PIN_ALLOC_0_INDEX 24U    /*!< The index of the first allocated pin from the port */



/*
** ===================================================================
**     Method      :  Bits6_Init (component BitsIO_LDD)
*/
/*!
**     @brief
**         This method initializes the associated peripheral(s) and the
**         component internal variables. The method is called
**         automatically as a part of the application initialization
**         code.
**     @param
**         UserDataPtr     - Pointer to the RTOS device
**                           structure. This pointer will be passed to
**                           all events as parameter.
**     @return
**                         - Pointer to the dynamically allocated private
**                           structure or NULL if there was an error.
*/
/* ===================================================================*/
LDD_TDeviceData* Bits6_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  Bits6_SetDir (component BitsIO_LDD)
*/
/*!
**     @brief
**         Sets a direction for the pins (available only if Direction =
**         _[input/output]_).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Dir             - Direction to set. Possible values:
**                           [false] - Input
**                           [true] - Output
*/
/* ===================================================================*/
void Bits6_SetDir(LDD_TDeviceData *DeviceDataPtr, bool Dir);

/*
** ===================================================================
**     Method      :  Bits6_SetInput (component BitsIO_LDD)
*/
/*!
**     @brief
**         Sets a direction to input for the pins (available only if
**         Direction = _[input/output]_).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
*/
/* ===================================================================*/
void Bits6_SetInput(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  Bits6_GetVal (component BitsIO_LDD)
*/
/*!
**     @brief
**         Returns the value of the Input/Output component. If the
**         direction is [input] then reads the input value of the pins
**         and returns it. If the direction is [output] then returns
**         the last written value (see [Safe mode] property for
**         limitations).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @return
**                         - Input value
*/
/* ===================================================================*/
uint32_t Bits6_GetVal(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  Bits6_PutVal (component BitsIO_LDD)
*/
/*!
**     @brief
**         Specified value is passed to the Input/Output component. If
**         the direction is [input] saves the value to a memory or a
**         register, this value will be written to the pins after
**         switching to the output mode - using [SetDir(TRUE)] (see
**         [Safe mode] property for limitations). If the direction is
**         [output] it writes the value to the pins. (Method is
**         available only if the Direction = _[output]_ or
**         _[input/output]_).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Val             - Output value
*/
/* ===================================================================*/
void Bits6_PutVal(LDD_TDeviceData *DeviceDataPtr, uint32_t Val);

/*
** ===================================================================
**     Method      :  Bits6_GetBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Returns the value of the specified bit/pin of the
**         Input/Output component. If the direction is [input] then it
**         reads the input value of the pin and returns it. If the
**         direction is [output] then it returns the last written value
**         (see [Safe mode] property for limitations).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer returned by [Init] method.
**     @param
**         Bit             - Bit/pin number to read
**     @param
**         BitVal          - The returned value: 
**                           [false] - logical "0" (Low level)
**                           [true] - logical "1" (High level)
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
**                           ERR_PARAM_VALUE - Invalid output parameter
*/
/* ===================================================================*/
LDD_TError Bits6_GetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool *BitVal);

/*
** ===================================================================
**     Method      :  Bits6_PutBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Specified value is passed to the specified bit/pin of the
**         Input/Output component. If the direction is [input] it saves
**         the value to a memory or register, this value will be
**         written to the pin after switching to the output mode -
**         using [SetDir(TRUE)] (see [Safe mode] property for
**         limitations). If the direction is [output] it writes the
**         value to the pin. (Method is available only if the Direction
**         = _[output]_ or _[input/output]_).
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure pointer.
**     @param
**         Bit             - Bit/pin number
**     @param
**         Val             - A new bit value. Possible values:
**                           [false] - logical "0" (Low level)
**                           [true] - logical "1" (High level)
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
*/
/* ===================================================================*/
LDD_TError Bits6_PutBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit, bool Val);

/*
** ===================================================================
**     Method      :  Bits6_SetBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Sets (to one) the specified bit of the Input/Output
**         component. It is the same as [PutBit(Bit, TRUE)]. (Method is
**         available only if the Direction = _[output]_ or
**         _[input/output]_).
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure pointer.
**     @param
**         Bit             - Bit/pin number to set
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
*/
/* ===================================================================*/
LDD_TError Bits6_SetBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);

/*
** ===================================================================
**     Method      :  Bits6_ClrBit (component BitsIO_LDD)
*/
/*!
**     @brief
**         Clears (sets to zero) the specified bit of the Input/Output
**         component. It is the same as [PutBit(Bit, FALSE)]. (Method
**         is available only if the Direction = _[output]_ or
**         _[input/output]_).
**     @param
**         DeviceDataPtr   - Pointer to device data
**                           structure pointer.
**     @param
**         Bit             - Bit/pin number to clear
**     @return
**                         - Error code, possible values:
**                           ERR_OK - OK
**                           ERR_PARAM_INDEX - Invalid pin index
*/
/* ===================================================================*/
LDD_TError Bits6_ClrBit(LDD_TDeviceData *DeviceDataPtr, uint8_t Bit);

/* END Bits6. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __Bits6_H */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/