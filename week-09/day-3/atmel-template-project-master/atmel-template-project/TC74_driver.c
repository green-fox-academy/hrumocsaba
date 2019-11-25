#include <avr/io.h>
#include <string.h>
#include <stdint.h>
#include "TC74_driver.h"
#define F_CPU 16000000UL
#include <avr/delay.h>
#define LED_OSC_ON 0b00100001
#define LED_OSC_OFF 0b00100000
#define  LED_ON 0b10000001
#define LED_ADDRESS 0b11100000 

uint8_t lzero[] =
{
	0x06, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x06
};
uint8_t lone[] =
{
	0x04, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e
};
uint8_t ltwo[] =
{
	0x06, 0x09, 0x08, 0x04, 0x02, 0x01, 0x01, 0x0f
};
uint8_t lthree[] =
{
	0x06, 0x09, 0x08, 0x06, 0x08, 0x08, 0x09, 0x06
};
uint8_t lfour[] =
{
	0x01, 0x01, 0x05, 0x05, 0x0f, 0x04, 0x04, 0x04
};
uint8_t lfive[] =
{
	0x0f, 0x01, 0x01, 0x07, 0x08, 0x08, 0x09, 0x06
};
uint8_t lsix[] =
{
	0x06, 0x09, 0x01, 0x07, 0x09, 0x09, 0x09, 0x06
};
uint8_t lseven[] =
{
	0x0f, 0x08, 0x08, 0x04, 0x02, 0x02, 0x02, 0x02
};
uint8_t leight[] =
{
	0x06, 0x09, 0x09, 0x06, 0x09, 0x09, 0x09, 0x06
};
uint8_t lnine[] =
{
	0x06, 0x09, 0x09, 0x09, 0x0e, 0x08, 0x09, 0x06
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
	TWI_read_ack();
	
	temp = TWDR;
	//printf("current temp is :%d\n", temp);
	TWI_stop();
	reset();
	
	return temp;	
}



void led_osc_on(){
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_read_ack();
	TWI_write(LED_OSC_ON);
	TWI_read_ack();
	TWI_stop();
}

void led_osc_off(){
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_read_ack();
	TWI_write(LED_OSC_OFF);
	TWI_read_ack();
	TWI_stop();
}


void draw_shape(uint8_t data[])
{
	//clear_display();
	uint8_t buff = 0;
	
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_read_ack();
	TWI_write(0b00000000);
	TWI_read_ack();
	
	for (int i = 0; i < 8; i++)
	{
		buff = (data[i] >> 1) | (data[i] << 7);
		TWI_write(buff);
		TWI_read_ack();
		TWI_write(0);
		TWI_read_ack();
	}
	TWI_stop();
}

void led_lightup(){
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_read_ack();
	TWI_write(LED_ON);
	TWI_read_ack();
	TWI_stop();
}

uint8_t* digits_for_led(uint8_t temp){
	uint8_t twodigit[] =
	{
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
	
	char numbers[2];
	itoa(temp, numbers, 8);
	int left = temp/10;
	int right = temp%10;
	switch (left){
		case 0:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lzero[i];
			}
			break;
		case 1:	
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lone[i];
			}
			break;
		case 2:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= ltwo[i];
			}
			break;
		case 3:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lthree[i];
			}
			break;
		case 4:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lfour[i];
			}
			break;
		case 5:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lfive[i];
			}
			break;
		case 6:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lsix[i];
			}
			break;
		case7:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lseven[i];
			}
			break;
		case 8:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= leight[i];
			}
			break;
		case 9:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lnine[i];
			}
			break;
		default:
			break;
		
	}
	
	switch (right){
		case 0:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lzero[i]<<4;
			}
			break;
		case 1:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lone[i]<<4;
			}
			break;
		case 2:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= ltwo[i]<<4;
			}
			break;
		case 3:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lthree[i]<<4;
			}
			break;
		case 4:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lfour[i]<<4;
			}
			break;
		case 5:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lfive[i]<<4;
			}
			break;
		case 6:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lsix[i]<<4;
			}
			break;
		case 7:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lseven[i]<<4;
			}
			break;
		case 8:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= leight[i]<<4;
			}
			break;
		case 9:
			for (int i = 0; i < 8; i++)
			{
				twodigit[i] |= lnine[i]<<4;
			}
			break;
		default:
		break;
		
	}
	draw_shape(twodigit);
	return twodigit;
}

void clear_display()
{
	TWI_start();
	TWI_write(LED_ADDRESS);
	TWI_read_ack();
	TWI_write(0b00000000);
	TWI_read_ack();
	
	for (int i = 0; i < 16; i++)
	{
		TWI_write(0x00);
		TWI_read_ack();
	}
	TWI_stop();
}



//TODO Advanced:
//Calculate the average of the last 16 data, and returns with that.
//TODO Advanced+:
//Select the outstanding (false data) before average it.
//These data don't needed, mess up your datas, get rid of it.
