#include <avr/io.h>
#include <stdint.h>
#include <stdio.h>
#include <avr/interrupt.h>
#include <string.h>
#include <STDIO_lib.h>

#define F_CPU 16000000
#include <util/delay.h>
uint8_t counter;


// TODO:
/* Create an enum type which represents the following program states:
	- LED blinker mode
	- LED-Pushbutton mode
	- LED on mode
	- LED off mode
*/
enum LED_mode{LED_Blinker_mode, LED_Pushbutton_mode, LED_On_mode, LED_Off_mode};

ISR(PCINT0_vect){
	PORTB ^= 1 << PORTB5;
}

ISR (TIMER0_OVF_vect)
{
	counter++;
	if (counter == 61)
	{
		PORTB ^= 1 << PORTB5;
		counter = 0;
	}
}

void init() {
    // Initialize the UART interface with 115200 baud/sec
    STDIO_init();

    // Initialize the LED pin
    DDRB |= 1 << DDRB5;
	//PORTB |= 1 << PORTB5;
	sei();
    
}

void button(){
	PCMSK0 |= 1 << 7;
	PCICR |= 1 << 0;
}

void destroybutton(){
	PCMSK0 = 0;
	PCICR= 0;
 }

void timer1(){
	TCCR0B = 0b00000101;
	TIMSK0 |= 1 << 0;

}
void destroytimer(){
	TCCR0B = 0;
	TIMSK0 |= 0;
}

int main(void) {
    // Don't forget to call the Init() function :)
    init();
	char buffer[32];
	timer1();

    // TODO:
    // Create a variable with your custom program state type enum

    // TODO:
    // Initialize the state to LED blinker mode

    // Infinite loop
    while (1) {
        // TODO:
        // Check the UART input buffer. If it's not empty process the string in it,
        // maybe it is a command!

        // TODO:
        // Do the tasks based on the state, hint: use switch-case
		gets(buffer);
		puts(buffer);
		if (strcmp(buffer,"blink"))
		{
			timer1();
			destroybutton();
		}else if (strcmp(buffer,"on") )
		{
			PORTB = 1 << PORTB5;
			destroytimer();
			destroybutton();
		}else if (strcmp(buffer,"off"))
		{
			PORTB = 0;
			destroytimer();
			destroybutton();
		}else if (strcmp(buffer,"button"))
		{
			button();
			destroytimer();
		}


    }
}