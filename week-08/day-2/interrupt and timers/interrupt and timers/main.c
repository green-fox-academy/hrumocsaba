
#include <avr/io.h>
#include <avr/interrupt.h>
#define F_CPU 16000000
#include <util/delay.h>

uint8_t button_was_pressed = 0;
uint8_t counter = 0;
uint8_t was_bigger = 0;
ISR (PCINT2_vect)
{
	button_was_pressed = 1;
	
}

ISR (TIMER0_OVF_vect)
{	
	counter++;
	if(OCR0A == 0){
		was_bigger = 1;
	}else if(OCR0A ==100){
		was_bigger = 0;
	}
	
	if(was_bigger){
		if(counter == 1){
			counter=0;
			OCR0A+=1;
		}
	}else{
		if(counter == 1){
			counter=0;
			OCR0A-=1;
		}
	}	
	PORTB = 0b00001111;
}

ISR(TIMER0_COMPA_vect)
{
	PORTB = 0;
}



void interrupt1(){
	sei();
	PCICR = 1 << 2;
	PCMSK2 = 1 << 3;
}

void timer1(){
	OCR0A = 100;	
	TCCR0B = 0b00000101;
	sei();
	TIMSK0 |= 1 << 0;
	TIMSK0 |= 1 << 1;
}



int main(void)
{
	interrupt1();
	timer1();
	DDRB = 0b00001111;
	PORTB = 0;
	
 
    while (1) 
    {
		//PORTB = 0;
    }
}

