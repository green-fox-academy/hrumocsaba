/*
 * knight.c
 *
 * Created: 2019. 11. 04. 16:47:58
 *  Author: HP
 */ 
#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>

void knight(){
		DDRB = 0b00000001;
		PORTB = 0b00000001;
	for (int i = 1; i < 4; i++)
	{
		DDRB =  1 << i;
		PORTB = 1 << i;
		_delay_ms(50);
	}
	for (int i = 1; i < 4; i++)
	{
		DDRB =  DDRB >> 1;
		PORTB = PORTB >> 1;
		_delay_ms(50);
	}
}

