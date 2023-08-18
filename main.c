/*
 * GccApplication1.c
 *
 * Created: 8/18/2023 1:41:32 PM
 * Author : Lenovo
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB |= (1<<DDB0);      //SET Data Direction Pin DDB0 as Output 
	
    while (1) 
    {
		PORTB |= (1<<PB0);  //PORT B0 PIN IS SET TO HIGH STATE = 1
		_delay_ms(100);
		
		PORTB &= ~(1<<PB0);     //PORT B0 PIN IS SET TO LOW STATE = 0
		_delay_ms(100);
    }
}

