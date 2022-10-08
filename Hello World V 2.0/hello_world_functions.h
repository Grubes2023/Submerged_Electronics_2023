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
    ANSELAbits.ANSA1 = 0;	//disable AN1 shared with RA1   Solves Input problem
    ANSELAbits.ANSA2 = 0;	//disable AN2 shared with RA2
    ANSELAbits.ANSA3 = 0;	//disable AN3 shared with RA3

    
    
    
//    TRISB=0b00000111 //setting RB[7:0] as input/out  with output=0
//    PORTB=0;         //clearing any prestored values in RB registers
    
//    TRISC=0b00000111 //setting RC[7:0] as input/out  with output=0
//    PORTC=0;         //clearing any prestored values in RC registers
    
}

 

int hello_wrld_1(){
    // Initial code to differentiate from each iteration
    LED1 = 1;
    __delay_ms(1000);
    LED1 = 0;
    __delay_ms(1000);
    int i=0;
    for(i=0; i<5; ++i)
        {
        LED1 = 1;            // Turn LED on
        __delay_ms(100);  // wait 0.1 sec
        LED1 = 0;            // Turn LED off
        __delay_ms(100);  // wait 0.1 sec
        }
    return 0;
}

int hello_wrld_2(){
    // Initial code to differentiate from each iteration
    LED2 = 1;
    __delay_ms(1000);
    LED2 = 0;
    __delay_ms(1000);
    int j=0;
    for(j=0; j<5; ++j)
        {
        LED2 = 1;            // Turn LED on
        __delay_ms(250);  // wait 0.25 sec
        LED2 = 0;            // Turn LED off
        __delay_ms(250);  // wait 0.25 sec
        }
    return 0;
}
