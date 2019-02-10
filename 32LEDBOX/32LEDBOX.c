/*
 * _32LEDBOX.c
 *
 * Created: 1/31/2018 11:40:13 AM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>

int main(void)
{
	DDRA=DDRB=DDRC=DDRD=0XFF;
	PORTA=PORTD=0XFF;
	PORTB=PORTC=0X81;
	_delay_ms(500);
    while(1)
    {
		
		PORTA=~PORTA;
		PORTB=~PORTB;
		PORTC=PORTB;
		PORTD=PORTA;
		_delay_ms(500);
        //TODO:: Please write your application code 
    }
}