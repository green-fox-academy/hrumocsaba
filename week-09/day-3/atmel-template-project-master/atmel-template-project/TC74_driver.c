#include <avr/io.h>
#include <string.h>
#include <stdint.h>
#include "TC74_driver.h"
#define F_CPU 16000000UL
#include <avr/delay.h>
#define LED_OSC_ON 0b00100001
#define  LED_ON 0b10000001
#define LED_ADDRESS 0b11100000 

const uint8_t led_data[] =
{
	0x7c, 0x82, 0x82, 0x7c, 0x00, 0x84, 0xfe, 0x80
};
void TWI_init(void)
{
	// TODO:
	// Set Prescaler to 4
	TWSR |= (1<<0);


	// TODO:
	// Set SCL frequency = 16000000 / (16 + 2 * 48 * 4) = 40Khz
	//So set the correct register to 0x30
	TWBR |= 0x30;


	// TODO
	//Enable TWI
	TWCR |= (1<<TWINT);

}

void TWI_start(void)
{
	//TODO
	//Send start signal
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	// TODO:
	// Wait for TWINT Flag set. This indicates that
	//the START condition has been transmitted.
	while (!(TWCR &(1<<TWINT)));

}

void TWI_stop(void)
{
	//TODO
	//Send stop signal
	TWCR = (1<<TWINT)|(1<<TWEN)|(1<<TWSTO);

}

uint8_t TWI_read_ack(void)
{
	//TODO
	//Read byte with ACK
	//TWCR |= (1 << TWINT) | (1 << TWEA);
	//Wait for TWINT Flag set. This indicates that
	//the DATA has been transmitted, and ACK/
	//NACK has been received.
	while (!(TWCR & 1<<TWINT));	

}


uint8_t TWI_read_nack(void)
{
	//TODO
	//Read byte with NACK
	//TWCR |= 1 << TWINT;
	//Wait for TWINT Flag set. This indicates that
	//the DATA has been transmitted, and ACK/
	//NACK has been received.
	while (!(TWCR & 1<<TWINT));		

}

void TWI_write(uint8_t u8data)
{
	//TODO
	//Load DATA into TWDR Register. Clear TWINT
	//bit in TWCR to start transmission of data.
	//Wait for TWINT Flag set. This indicates that
	//the DATA has been transmitted, and ACK/
	//NACK has been received.
	TWDR = u8data;
	TWCR = (1<<TWINT) | (1<<TWEN);

}

uint8_t TWI_get_data(){
	uint8_t temp = TWDR;
	return temp;
}

void reset(){
	TWSR = 0b11111001;
	TWAR = 1111111110;
	TWDR = 1111111111;
	TWCR = 0100000100;
}

//TODO
//Write a function that communicates with the TC74A0.
//The function need to be take the address of the ic as a parameter.
//datasheet: http://ww1.microchip.com/downloads/en/DeviceDoc/21462D.pdf
//And returns with the temperature.
uint8_t get_temp(uint8_t slv_address){
	uint8_t temp;
	TWI_start();
	TWI_write(0b10010000);
	TWI_read_ack();
	TWI_write(0);
	TWI_read_ack();
	TWI_start();
	TWI_write(0b10010001);
	TWI_read_ack();
	TWCR |= 1 << TWINT;
	_delay_ms(1);
	temp = TWDR;
	printf("current temp is :%d\n", temp);
	TWI_stop();
	reset();
		
}



void led_osc_on(){
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_write(LED_OSC_ON);
	TWI_stop();
}


void draw_shape(uint8_t data[])
{
	//clear_display();
	uint8_t buff = 0;
	
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_write(0b00000000);
	
	for (int i = 0; i < 8; i++)
	{
		buff = (data[i] >> 1) | (data[i] << 7);
		TWI_write(buff);
		TWI_write(0);
	}
	TWI_stop();
}

void led_lightup(){
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_write(LED_ON);
	TWI_stop();
}


//TODO Advanced:
//Calculate the average of the last 16 data, and returns with that.
//TODO Advanced+:
//Select the outstanding (false data) before average it.
//These data don't needed, mess up your datas, get rid of it.
