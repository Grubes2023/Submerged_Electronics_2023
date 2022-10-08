#include <xc.h>
#include <stdio.h>
#include "hello_world_functions.h"

// main will be recalled as long as MCU is on
int main(){
    setup();
    hello_wrld_1();       // 
    hello_wrld_2();         //button controlled: still not working
    __delay_ms(1000);
    return 0;
}