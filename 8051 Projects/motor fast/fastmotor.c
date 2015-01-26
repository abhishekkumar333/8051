#include<reg51.h>
void delay();
void main()
{
while(1)
{
P1=0x80;
delay();
P1=0x40;
delay();
}
}
void delay()
{
int i,j;
for(j=0;j<30;j++)
{
for(i=0;i<30000;i++)
{}
}
}