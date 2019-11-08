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
int player_seconds;
uint8_t was_lit = 0;

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
	if (overflow_counter2 == 305)
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
if (gamemode_number > 0){
	if(was_lit == 0){
		invalid();
		playerpress_destroy();
	}else if (was_lit == 1 && seconds-ranom_number < 300){
		good();
		playerpress_destroy();
	}else if (was_lit == 1 && seconds-ranom_number > 300){
		average();
		playerpress_destroy();
	}
   }	
}

ISR(PCINT0_vect){
	_delay_ms(250);
	gamemode_number++;
	ranom_number = rand()%10000;
	PORTC |=  1 << 1;
	PORTC |=  1 << 2;
	PORTC |=  1 << 0;
	playerpress();
	seconds = 0;
	TCCR2B = 0;
	TIMSK2 = 0;
	if(PORTC & 1<<PORTC3){
		PORTC ^= 1<<PORTC3;
	}
	timer();
}

void random_countback(){	
	if (seconds == ranom_number+3000)
	{
		TCCR0B = 0;
		TIMSK0 = 0;
		timer2();
		playerpress_destroy();
		gamemode_number = 0;
	}else if (seconds == ranom_number){
		PORTC |= 1<<PORTC3;
		was_lit = 1;
	}
}
	
void interrupt_start(){
	PCMSK0 = 1<<0;
	PCICR = 1<<0;
}


void playerpress(){
	
	PCMSK1 = 1<<4;
	PCICR = 1<<1;
}
void playerpress_destroy(){
	PCMSK1 = 0;
	PCICR = 0;
}

void invalid(){
	//red
	PORTC ^= 1 << 0;
	
}
void good(){
	//blue
	PORTC ^= 1 << 2;
}
void average(){
	//green
	PORTC ^= 1 << 1;
}



int main(void)
{
	sei();
	DDRC = 0b00001111;
	gamemode_number=0;
	srand(time(NULL));
	overflow_counter=0;
	overflow_counter2=0;
    seconds=0;
	interrupt_start();
	timer2();

    /* Replace with your application code */
    while (1) 
    {
		if(gamemode_number == 0){
			was_lit = 0;
			interrupt_start();
			
		}else if (gamemode_number>0){			
			random_countback();
		}	
    }
}

