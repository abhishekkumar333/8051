#include<reg51.h>
void delay();
void main()
{
P0=~0x01;
delay();
P0=~0x02;
delay();

}
void delay()
{
int i;
for(i=0;i<10000;i++);
}