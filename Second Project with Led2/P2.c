/*
 * P2.c
 *
 * Created: 25/04/2022 12:54:37 �.�
 * Author: Shervin
 */

#include <io.h>
#include <mega16.h>
#include <delay.h>

void main(void)
{
DDRA=0b00000001; //pin A0 output
DDRB=0b00000001; //port B output
PORTB=0b00000001; //pin B0 pullup
while (1)
    {
    // Please write your application code here 
        delay_ms(5);
        if (PINB.0 == 0){
         PORTA.0 = !PORTA.0 ;   
         //While payin ta moqui ke dast roye kild ast brnme kar dgiyi nkond
//        while (PINB.0 == 0){}
        }
      }
}

