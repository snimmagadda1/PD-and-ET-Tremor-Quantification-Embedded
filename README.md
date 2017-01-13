# Park & Sons Co. Essential Tremometer: Tremor Quantification System Embedded Comonent
Contributors: Sai Nimmagadda, David Whisler

## Project Description
This is the embedded component of the Essential Tremometer. C code was designed to run on a PIC16F1847 microcontroller. The microcontroller acts as a relay device simultaneously recording data from the ADXL345 accelerometer and relaying via bluetooth to a standolone PC. See full project [here](https://github.com/snimmagadda1/PD-and-ET-Tremor-Quantification) for additional information.

## File Structure
- main.c : Running loop
- ADXL346.c/h : Accelerometer library
- Communication.c/h : SPI library
- mcc.c/h : MPLAB generated files
- spiX.c/h : Necessary SPI functions
- pin_manager.c/h : MPLAB generated files
