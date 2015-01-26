#include<reg51.h>
void delay();
void main()
{
P0=~0x;
delay();
P0=~0x44;
delay();
P0=~0x22;
delay();
P0=~0x11;
delay();
}
void delay()
{
unsigned int i;
for(i=0;i<=30000;i++);
}