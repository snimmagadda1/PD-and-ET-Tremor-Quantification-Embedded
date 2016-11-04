/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 3.16
        Device            :  PIC16F1847
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IRQ aliases
#define IRQ_TRIS               TRISA1
#define IRQ_LAT                LATA1
#define IRQ_PORT               RA1
#define IRQ_ANS                ANSA1
#define IRQ_SetHigh()    do { LATA1 = 1; } while(0)
#define IRQ_SetLow()   do { LATA1 = 0; } while(0)
#define IRQ_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define IRQ_GetValue()         PORTAbits.RA1
#define IRQ_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define IRQ_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define IRQ_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define IRQ_SetDigitalMode()   do { ANSA1 = 0; } while(0)


// get/set IRQ aliases
#define IRQ_TRIS               TRISA1
#define IRQ_LAT                LATA1
#define IRQ_PORT               RA1
#define IRQ_ANS                ANSA1
#define IRQ_SetHigh()    do { LATA1 = 1; } while(0)
#define IRQ_SetLow()   do { LATA1 = 0; } while(0)
#define IRQ_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define IRQ_GetValue()         PORTAbits.RA1
#define IRQ_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define IRQ_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define IRQ_SetAnalogMode()   do { ANSA1 = 1; } while(0)
#define IRQ_SetDigitalMode()   do { ANSA1 = 0; } while(0)


// get/set CS2 aliases
#define CS2_TRIS               TRISA7
#define CS2_LAT                LATA7
#define CS2_PORT               RA7
#define CS2_SetHigh()    do { LATA7 = 1; } while(0)
#define CS2_SetLow()   do { LATA7 = 0; } while(0)
#define CS2_Toggle()   do { LATA7 = ~LATA7; } while(0)
#define CS2_GetValue()         PORTAbits.RA7
#define CS2_SetDigitalInput()    do { TRISA7 = 1; } while(0)
#define CS2_SetDigitalOutput()   do { TRISA7 = 0; } while(0)



// get/set CS1 aliases
#define CS1_TRIS               TRISB0
#define CS1_LAT                LATB0
#define CS1_PORT               RB0
#define CS1_WPU                WPUB0
#define CS1_SetHigh()    do { LATB0 = 1; } while(0)
#define CS1_SetLow()   do { LATB0 = 0; } while(0)
#define CS1_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define CS1_GetValue()         PORTBbits.RB0
#define CS1_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define CS1_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define CS1_SetPullup()    do { WPUB0 = 1; } while(0)
#define CS1_ResetPullup()   do { WPUB0 = 0; } while(0)


// get/set CS1 aliases
#define CS1_TRIS               TRISB0
#define CS1_LAT                LATB0
#define CS1_PORT               RB0
#define CS1_WPU                WPUB0
#define CS1_SetHigh()    do { LATB0 = 1; } while(0)
#define CS1_SetLow()   do { LATB0 = 0; } while(0)
#define CS1_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define CS1_GetValue()         PORTBbits.RB0
#define CS1_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define CS1_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define CS1_SetPullup()    do { WPUB0 = 1; } while(0)
#define CS1_ResetPullup()   do { WPUB0 = 0; } while(0)


// get/set CS1 aliases
#define CS1_TRIS               TRISB0
#define CS1_LAT                LATB0
#define CS1_PORT               RB0
#define CS1_WPU                WPUB0
#define CS1_SetHigh()    do { LATB0 = 1; } while(0)
#define CS1_SetLow()   do { LATB0 = 0; } while(0)
#define CS1_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define CS1_GetValue()         PORTBbits.RB0
#define CS1_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define CS1_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define CS1_SetPullup()    do { WPUB0 = 1; } while(0)
#define CS1_ResetPullup()   do { WPUB0 = 0; } while(0)


// get/set CS1 aliases
#define CS1_TRIS               TRISB0
#define CS1_LAT                LATB0
#define CS1_PORT               RB0
#define CS1_WPU                WPUB0
#define CS1_SetHigh()    do { LATB0 = 1; } while(0)
#define CS1_SetLow()   do { LATB0 = 0; } while(0)
#define CS1_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define CS1_GetValue()         PORTBbits.RB0
#define CS1_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define CS1_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define CS1_SetPullup()    do { WPUB0 = 1; } while(0)
#define CS1_ResetPullup()   do { WPUB0 = 0; } while(0)


// get/set CS1 aliases
#define CS1_TRIS               TRISB0
#define CS1_LAT                LATB0
#define CS1_PORT               RB0
#define CS1_WPU                WPUB0
#define CS1_SetHigh()    do { LATB0 = 1; } while(0)
#define CS1_SetLow()   do { LATB0 = 0; } while(0)
#define CS1_Toggle()   do { LATB0 = ~LATB0; } while(0)
#define CS1_GetValue()         PORTBbits.RB0
#define CS1_SetDigitalInput()    do { TRISB0 = 1; } while(0)
#define CS1_SetDigitalOutput()   do { TRISB0 = 0; } while(0)

#define CS1_SetPullup()    do { WPUB0 = 1; } while(0)
#define CS1_ResetPullup()   do { WPUB0 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);





#endif // PIN_MANAGER_H
/**
 End of File
*/