//  Title: Hello World V1
//  Author: Brandon Graeber
//  MCU: PIC16F722A
//  
//  Goal: Turn on LED with an output
//  Functions used: setting GPIO to output
//                  setting clock
//                  correct programmer connection
//                  renaming Pin for Easier Use

#include <xc.h>
#include <stdio.h>

#define _XTAL_FREQ 8000000   // Frequency of clock (I think this is right) (when PLLEN = ON, def = 8 MHz)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define LED         PORTAbits.RA2      // LED connected to RA2

int main(){
    //LED_TRIS = 0; 
    TRISA=0b11110011; // Setting RA[7:0] to input/output (0=out) 
    PORTA=0;            // Writing a zero to everything to clear MCU
    
    // Initial code to differntiate from each itteration
    LED = 1;
    __delay_ms(5000);
    LED = 0;
    __delay_ms(5000);
    
    while(1)  // infinite while Loop (not ideal)
        {
        LED = 1;            // Turn LED on
        __delay_ms(1000);  // wait 1 sec
        LED = 0;            // Turn LED off
        __delay_ms(1000);  // wait 1 sec
        }
    return 0;
}