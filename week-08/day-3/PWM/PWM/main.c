/*
 * PWM.c
 *
 * Created: 2019. 11. 06. 11:36:19
 * Author : HP
 */ 

#include <avr/io.h>
#define F_CPU 16000000
#include <util/delay.h>
#include <avr/interrupt.h>
uint8_t change_counter = 0;
uint8_t counter = 5;
uint8_t duty = 0;

ISR(PCINT1_vect){
	change_counter++;
	_delay_ms(300);

}

void init(){
	//DDRD = 1 << DDRD6;
	TCCR0B = 0b00000101;
	TCCR0A = 0b10000011;
	OCR0A = 0;
	
}

void set_duty(uint8_t _duty){
	OCR0A = duty;
}

void button_control(){
	if(change_counter > 0){
		counter++;
		change_counter = 0;			
	}
	if (counter > 5){
		counter = 1;
	}
}


void interrupt1(){
	
	sei();
	PCICR = 1 << 1;
	PCMSK1 = 1 << 0;
}

void output_pwm(){
	if(counter == 1){
		DDRD = 1 << DDRD6;
		duty= 250;
	}
	else if (counter == 2)
	{
		duty =180;
	}
	else if (counter == 3)
	{
		duty = 100;
	}
	else if (counter == 4)
	{
		duty= 60;
	}
	else if (counter == 5)
	{
		DDRD = 0;
	}
}

int main(void)
{
	
	init();
	interrupt1();
    /* Replace with your application code */
    while (1) 
    {
		set_duty(duty);
		button_control();
		output_pwm();
		
		
    }
}

