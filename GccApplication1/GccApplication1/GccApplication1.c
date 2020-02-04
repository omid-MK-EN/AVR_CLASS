/*
 * GccApplication1.c
 *
 * Created: 1/6/2020 1:32:03 PM
 *  Author: DELL
 */ 

#include "library/config.h"
//#include <avr/io.h>
//#include "library/global.h"
//#include <util/delay.h>


//void cofig_port(void);
//void display(uint8_t,uint8_t,uint8_t,uint8_t);
//void Counter(void);
//void Switch(void);
//void menu(void);
//
//
//uint8_t array1[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0xff, 0x6f};
 //uint8_t min = 99,sec = 59;
int main(void)
{
	cofig_port();
    while(1)
    {
		Counter();	
    }
}
//void cofig_port(void)
//{
	//DDRC = 0xff;
	//PORTC = 0;
	//DDRD = 0xff;
	//PORTD = 0;
	//DDRA = 0x3f;
	//PORTA = 0xc0;
	//DDRB =0xff;
	//PORTB = 0;
//}
//void Counter(void)
//{
	////static uint8_t sec = 59;
	//uint8_t sec1,sec2,min1,min2;
	////static uint8_t min = 99;
	//Switch();
	//if (sec == 0)
	//{
		//min--;
		//sec = 59;
	//}
	//sec--;
	//
	//sec2 = sec % 10;
	//sec1 = sec / 10;
	//min2 = min % 10;
	//min1 = min / 10;
	//
	//display(sec2,sec1,min2,min1);
//}
//
//
//void display(uint8_t sec2,uint8_t sec1,uint8_t min2,uint8_t min1)
//{
	//uint8_t data = 0;
	//for (uint16_t index4 = 0;index4 < 30;index4++)
	//{
		//for (uint8_t counter2 = 0;counter2 <4;counter2++)
		//{
			//if (counter2 == 0)
			//{
				//PORTD = 0xfe;
				//data = array1[sec2];
			//}
			//else if (counter2 == 1)
			//{
				//PORTD = 0xfd;
				//data = array1[sec1];
			//}
			//else if (counter2 == 2)
			//{
				//PORTD = 0xfb;
				//data = array1[min2];
			//}
			//else if (counter2 == 3)
			//{
				//PORTD = 0xf7;
				//data = array1[min1];
			//}
			//
			//for (uint8_t index2 = 0;index2< 8;index2++)
			//{
				//if (data & 0x80  )
				//{
					//sbi(PORTC,1);
					//sbi(PORTC,0);
					//sbi(PORTC,2);
					//PORTC = 0;
				//}
				//else
				//{
					//sbi(PORTC,0);
					//sbi(PORTC,2);
					//PORTC = 0;
				//}
				//data <<=1;
			//}
			//
			//_delay_ms(1);
			//
			//
		//}
	//}
		//
	//
							//
	//
//}
//void Switch(void)
//{
	//if (CHECKBIT(PINA,7) == 0)
	//{
		//_delay_ms(20);
		//if (CHECKBIT(PINA,7) == 0)
		//{
			//while(1)
			//{
				//if (CHECKBIT(PINA,6) == 0)
				//{
					//_delay_ms(20);
					//if (CHECKBIT(PINA,6) == 0)
					//{
						//min = 99;
						//sec = 59;
						//break;
					//}	
				//}
				//display(0,0,0,0);
			//}
		//}
	//}
	//
	//else if (CHECKBIT(PINA,6) == 0)
	//{
		//_delay_ms(20);
		//if (CHECKBIT(PINA,6) == 0)
			//menu();
	//}
//}
//
//void menu(void)
//{
	//if (min < 99)
	//{
		//min++;
	//}
	//
//}


	



			