
#include<reg51.h>
void delay();
void main()
{
P0=~0x7E;
delay();
P0=~0x3C;
delay();
P0=~0x18;
delay();
P0=~0x00;
delay();
P0=~0x18;
delay();
P0=~0x3C;
delay();
P0=~0x7E;
delay();
P0=~0xFF;
delay();

}
void delay()
{
int i;
for(i=0;i<=30000;i++);
}