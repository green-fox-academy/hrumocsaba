#include "TC74_driver.h"
#include "STDIO_lib.h"
#include <avr/io.h>
#include <stdio.h>
#include <avr/interrupt.h>

#define F_CPU 16000000UL
#include <avr/delay.h>
uint8_t overflow_counter2;
uint8_t temp;

#define LED_DDR			DDRB
#define LED_DDR_POS		DDRB5
#define LED_PIN			PINB
#define LED_PIN_POS		PINB5
#define LED_PORT		PORTB
#define LED_PORT_POS	PORTB5

const uint8_t twodigit[8];


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
	led_osc_on();
	timer();
	
}
ISR(TIMER0_OVF_vect){
	overflow_counter2++;
	if (overflow_counter2 == 64)
	{
		PORTB ^= 1<<PORTB5;
		TWI_init();
		temp = get_temp(144);
		printf("%d\n", temp);
		TWI_init();
		//clear_display();
		digits_for_led(temp-6);
		led_lightup();
		reset();
		
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

	while (1) {
		

	}
}
