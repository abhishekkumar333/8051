#include<reg51.h>
void delay();
void main()
{
while(1)
{
P1=0x80;
delay();
P1=0x00;
delay();
P1=0x40;
}

}
void delay()
{
unsigned int i;
		 for(i=0;i<100000;i++);
}
