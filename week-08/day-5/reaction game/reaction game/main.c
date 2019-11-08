/*
 * reaction game.c
 *
 * Created: 2019. 11. 08. 8:58:57
 * Author : HP
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int seconds = 0;

int ranom_number;
int overflow_counter;
int overflow_counter2;
uint8_t gamemode_number;

void timer(){
	//OCR0A = 100;
	TCCR0B = 0b00000010;
	TIMSK0 |= 1 << 0;
	//TIMSK0 |= 1 << 1;
}
void timer2(){
	//OCR0A = 100;
	TCCR2B = 0b00000101;
	TIMSK2 |= 1 << 0;
	//TIMSK0 |= 1 << 1;
}

ISR(TIMER2_OVF_vect){
	overflow_counter2++;
	if (overflow_counter2 == 610)
	{
		PORTC ^= 1<<PORTC3;
		overflow_counter2 = 0;
		
	}
}

ISR(TIMER0_OVF_vect){
	overflow_counter++;
	if (overflow_counter == 8)
	{
		seconds++;
		overflow_counter = 0;
		
	}
}
ISR(PCINT1_vect){
	seconds = 0;
	TCCR2B = 0;
	TIMSK2 = 0;
	if(PORTC & 1<<PORTC3){
		PORTC ^= 1<<PORTC3;
	}
	gamemode_number++;
	timer();
	_delay_ms(250);
	
}

void blinking(){
	_delay_ms(800);
	PORTC ^= 1<<PORTC3;
	
}
void random_countback(){
		
	ranom_number = rand()%9000;
	if (seconds == ranom_number+3000)
	{
		PORTC |= 1<<PORTC3;
		_delay_ms(100);
		PORTC ^= 1<<PORTC3;
		_delay_ms(100);
		PORTC |= 1<<PORTC3;
		_delay_ms(100);
		PORTC ^= 1<<PORTC3;
		gamemode_number = 0;
		TCCR0B = 0;
		TIMSK0 = 0;
		timer2();
	}
}
	
void playerpress();


void interrupt_start(){
	sei();
	PCMSK1 = 1<<4;
	PCICR = 1<<1;
}



int main(void)
{
	DDRC = 0b00001111;
	gamemode_number=0;
	interrupt_start();
	srand(time(NULL));
	overflow_counter=0;
	overflow_counter2=0;
    seconds=0;
	timer2();

    /* Replace with your application code */
    while (1) 
    {
		PORTC |= 1 << 0;
		PORTC |= 1 << 2;
		if(gamemode_number == 0){
			
		}else{
			random_countback();
		}	
    }
}

