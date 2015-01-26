#include<reg51.h>
void delay();
void main()
{
P0=~0xFF;
delay();
P0=~0xE7;
delay();
P0=~0xC3;
delay();
P0=~0x81;
delay();

}
void delay()
{
unsigned int i;
for(i=0;i<=50000;i++);
}