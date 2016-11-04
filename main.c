/*
 * File:   main.c
 * Author: Sai Nimmagadda, David Whisler, Caroline Kittle, Eric Musselman
 *
 * Last Edit on October 2, 2016
 * 
 * Essential Tremometer Code Skeleton 
 */

// Libraries to include 
#include <xc.h>
#include <stdio.h>
#include <string.h>  
#include "mcc.h"
#include "pin_manager.h"
#include "spi1.h"
#include "spi2.h"
#include "ADXL345.h"


// Initialize accelerometer (ADXL345))
void accel_init()
{
    ADXL345_Init(ADXL345_SPI_COMM);
    ADXL345_SetRegisterValue(ADXL345_BW_RATE, '\x0F'); // Change to lower later for power consumption
    ADXL345_SetPowerMode('\x0');
    ADXL345_SetRangeResolution(ADXL345_RANGE_PM_2G, ADXL345_FULL_RES);
    ADXL345_SetPowerMode('\x1');  
}

// Collect data as short integers
char* collect_data()
{
    short x,y,z;
    char datastr[20];
    ADXL345_GetXyz(&x,&y,&z);
    sprintf(&datastr, "%+3.3d,",x);
    sprintf(&datastr+5, "%+3.3d,",y);
    sprintf(&datastr+10, "%+3.3d;$$$$$",z);
    memcpy(&datastr+20, "\0", 1);
    return &datastr;
}

// Send data over SDEP protocol to bluetooth module, packetized with the 
// correct headers and wrapped AT command
void send_data_manual(char* data)
{
    char* ATcommand = "AT+BLEUARTTX=";
    char packet1[20];
    char packet2[20];
    char packet3[5];
    char buff[20];
    
    char* header1 = "\x10\x00\x0A\x90";
    char* header2 = "\x10\x00\x0A\x90";
    char* header3 = "\x10\x00\x0A\x01";
    
    memcpy(&packet1, header1, 4);
    memcpy(&packet1+4, ATcommand, 13);
    memcpy(&packet1+17, data, 3);
    
    memcpy(&packet2, header2, 4);
    memcpy(&packet2+4, data+3, 16);
    
    memcpy(&packet3, header3, 4);
    memcpy(&packet3+4, data+19, 1);
    

    
    // Clear lingering response packets
    while(IRQ_GetValue())
    {
        CS1_SetLow();
        __delay_us(100);
        SPI1_Exchange8bitBuffer(NULL, 20, &buff);
        CS1_SetHigh();
    }
    
    __delay_us(500);
    // Send packet 1
    CS1_SetLow();
    __delay_us(100);
    SPI1_Exchange8bitBuffer(&packet1, 20, NULL);
    CS1_SetHigh();
    
    __delay_us(500);
    // Send packet 2
    CS1_SetLow();
    __delay_us(100);
    SPI1_Exchange8bitBuffer(&packet2, 20, NULL);
    CS1_SetHigh();
    
    __delay_us(500);
    // Send packet 3
    CS1_SetLow();
    __delay_us(100);
    SPI1_Exchange8bitBuffer(&packet3, 5, NULL);
    CS1_SetHigh();
    
}


void main(void) {
    // MCC Initialize
    SYSTEM_Initialize();
    
    accel_init();

    char* data;

    while(1)
    {
        data = collect_data();
        send_data_manual(data);
        __delay_ms(1); // delay to improve FIFO handling
    }
        
}
