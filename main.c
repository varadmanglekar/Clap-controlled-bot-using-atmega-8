/*
 * sound_controled_bot.c
 *
 * Created: 12-06-2016 11:51:22
 * Author : pc
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
   DDRB=0b11111111;
   DDRC=0b00000000;
   char x=0b00000000;
   char y;
    while (1) 
    {
		y=PINC&0b00000001;
		
		if(y==0b00000000)
		{
			
		}
		else if(y==0b00000001)
		{
			if(x==0b00000000)
			{
				PORTB=0b00001010;
				x=0b00000001;
				_delay_ms(100);
			}
			else if(x==0b00000001)
			{
				PORTB=0b00000000;
				x=0b00000000;
				_delay_ms(100);
			}
		}
		
    }
}

