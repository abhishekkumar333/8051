#include<reg51.h>
void delay();
void main()
{
P0=~0x80;
delay();
P0=~0xC0;
delay();
P0=~0xE0;
delay();
P0=~0xF0;
delay();
P0=~0xF8;
delay();
P0=~0xFC;
delay();
P0=~0xFE;
delay();
P0=~0xFF;
delay();

}
void delay()
{
unsigned int i;
for(i=0;i<=30000;i++);
}