
#include<reg51.h>
void delay();
void main()
{
P0=~0xC0;
delay();
P0=~0x60;
delay();
P0=~0x30;
delay();
P0=~0x18;
delay();
P0=~0x0C;
delay();
P0=~0x06;
delay();
P0=~0x03;
delay();
P0=~0x03;
delay();
P0=~0x06;
delay();
P0=~0x0C;
delay();
P0=~0x18;
delay();
P0=~0x30;
delay();
P0=~0x60;
delay();
P0=~0xC0;
delay();

}
void delay()
{
int i;
for(i=0;i<=3000;i++);
}