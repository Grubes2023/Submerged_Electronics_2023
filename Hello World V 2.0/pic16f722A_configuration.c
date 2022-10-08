
// PIC16F722A Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = INTOSCIO        // Oscillator Selection bits (LP oscillator: Low-power crystal on RA6/OSC2/CLKOUT and RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled and can be enabled by SWDTEN bit of the WDTCON register)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config MCLRE = OFF      // RE3/MCLR Pin Function Select bit (RE3/MCLR pin function is digital input, MCLR internally tied to VDD)
#pragma config CP = OFF          // Code Protection bit (Program memory code protection is disabled)
#pragma config BOREN = OFF      // Brown-out Reset Selection bits (BOR disabled)
#pragma config BORV = 25        // Brown-out Reset Voltage selection bit (Brown-out Reset Voltage (VBOR) set to 2.5 V nominal)
#pragma config PLLEN = ON      // INTOSC PLL Enable bit

// CONFIG2
#pragma config VCAPEN = RA0     // Voltage Regulator Capacitor Enable bits (VCAP functionality is enabled on RA0)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

