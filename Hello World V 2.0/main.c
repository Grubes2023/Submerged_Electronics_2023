#include <xc.h>
#include <stdio.h>
#include "hello_world_functions.h"

// main will be recalled as long as MCU is on
int main(){
    setup();
    if(Button1)
    {
        hello_wrld_1();
    }  
    if(Button2)
    {
        hello_wrld_2();
    }
    return 0;
}
