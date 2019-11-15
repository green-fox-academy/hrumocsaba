#include "TC74_driver.h"
#include "STDIO_lib.h"
#include <avr/io.h>
#include <stdio.h>
#include <avr/interrupt.h>

#define F_CPU 16000000UL
#include <avr/delay.h>
uint8_t overflow_counter2;

#define LED_DDR			DDRB
#define LED_DDR_POS		DDRB5
#define LED_PIN			PINB
#define LED_PIN_POS		PINB5
#define LED_PORT		PORTB
#define LED_PORT_POS	PORTB5

void system_init()
{
	//TODO
	// Call the TWI driver init function
	TWI_init();
	// SDIO lib is initialed with 115200 baud rate with 8N1 settings
	STDIO_init();
	// Interrupts must be enabled as STDIO lib uses interrupts for receive
	sei();
	// Don't forget to call the init function :)
	
}
ISR(TIMER0_OVF_vect){
	overflow_counter2++;
	if (overflow_counter2 == 64)
	{
		PORTB ^= 1<<PORTB5;
		get_temp(144);
		
		overflow_counter2 = 0;
	}
}
	
void timer(){

	TCCR0B = 0b00000101;
	TIMSK0 |= 1 << 0;
}

void reset_twc(){
	TWBR = 0x30;
	TWSR = 0xF9;
	TWAR = 0xFE;
	TWDR = 0xFF;
	TWCR = 0;
	TWAMR = 0;
}

int main(void)
{
	system_init();
	
	

	printf("System initialized\n");
	uint8_t shape[8] = {0x02, 0x3c, 0xa4, 0x24, 0x3c, 0x04, 0x05, 0x44};
	led_osc_on();
	draw_shape(shape);
	led_lightup();
	reset();
	timer();
	
	
	// Infinite loop
	while (1) {
		//TODO
		//Write the temperature frequently.
		
		
		
		
		

		//TODO
		//Advanced: Don't use delay, use timer.

		//TODO
		//Blink the led to make sure the code is running

	}
}
