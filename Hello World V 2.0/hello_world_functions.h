//  Title: Hello World
//  Author: Brandon Graeber
//  MCU: PIC16F722A
//  
//  Goal: Turn on LED with an output based on an input
//  Functions used: setting GPIO to output
//                  setting clock
//                  correct programmer connection
//                  renaming Pins for Easier Use
//                  Input digital logic
//                  if using 3rd button: register use to detail current state

#include <xc.h>
#include <stdio.h>


#define _XTAL_FREQ 8000000   // Frequency of clock (I think this is right) (when PLLEN = ON, def = 8 MHz)

#define Button1     PORTAbits.RA1       // 
#define Button2     PORTAbits.RA2       //
#define LED1        PORTAbits.RA3       // LED connected to RA2
#define LED2        PORTAbits.RA4       // LED connected to RA2

void setup(){
    TRISA=0b00000111; //setting RA[7:0] as input/out  with output=0
    PORTA=0;         //clearing any prestored values in RA registers
    
//    TRISB=0b00000111 //setting RB[7:0] as input/out  with output=0
//    PORTB=0;         //clearing any prestored values in RB registers
    
//    TRISC=0b00000111 //setting RC[7:0] as input/out  with output=0
//    PORTC=0;         //clearing any prestored values in RC registers
    
}

 

int hello_wrld_1(){
    //LED_TRIS = 0; 

    //PORTA=0;            // Writing a zero to everything to clear MCU
    
    // Initial code to differentiate from each iteration
    LED1 = 1;
    __delay_ms(5000);
    LED1 = 0;
    __delay_ms(5000);
    int i=0;
    while(i<3)  // infinite while Loop (not ideal)
        {
        LED1 = 1;            // Turn LED on
        __delay_ms(1000);  // wait 1 sec
        LED1 = 0;            // Turn LED off
        __delay_ms(1000);  // wait 1 sec
        ++i;
        }
    return 0;
}

int hello_wrld_2(){
          // Writing a zero to everything to clear MCU
    
    // Initial code to differntiate from each itteration
    LED2 = 1;
    __delay_ms(5000);
    
    // simple if statement to check input logic coding
    if(Button1 == 1)
        {
        // quick flashing LED2
        LED2 = 1;
        __delay_ms(500);
        LED2 = 0;
        __delay_ms(500);
        LED2 = 1;
        __delay_ms(500);
        LED2 = 0;
        __delay_ms(500);
    }    
    LED2 = 0;
    __delay_ms(5000);
    return 0;

}