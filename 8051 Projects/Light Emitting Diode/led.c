#include<reg51.h>
void delay();
void main()
{
P0=0xFF;
while(1)
{
if(P0==0x01)
P0=0xFF;
else
P0=0x00;
}
/*while(1)
{
if(P0==0x03)
P1=0xFF;
else if(P0==0x01)
P1=0x0C;
else if(P0==0x02)
P1=0x0B;
else if(P0==0x00)
P1=0x09;
}	*/
} 
void delay()
{
unsigned int i;
for(i=0;i<=30000;i++);
}