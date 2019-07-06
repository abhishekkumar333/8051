#include <reg51.h>
void delay();
void main ()
{
	 while(1)
	 {

		P0=~0x04;
		delay();
		P0=~0x08;
		delay();
	
		
		
		
	}
}
void delay()
{
int i;
for(i=0;i<60000;i++);
}
