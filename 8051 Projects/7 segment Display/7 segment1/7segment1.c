#include<reg51.h>
sbit a=P3^7;
sbit b=P3^6;
sbit c=P3^5;
sbit d=P3^4;
void delay();
void main()
{

 a=0,b=0,c=0,d=0;
 P2=0x88;
 delay();
 P2=0xEB;
 delay();
 P2=0x4C;
 delay();
 P2=0x49;
 delay();
 P2=0x2B;
 delay();
 P2=0x19;
 delay();
 P2=0x18;
 delay();
 P2=0x8B;
 delay();
 P2=0x08;
 delay();
 P2=0x0B;
 delay();
 P2=0x0A;
 delay();
 P2=0x08;
 delay();
 P2=0x9C;
 delay();
 P2=0x88;
 delay();
 P2=0x1C;
 delay();
 P2=0x1E;
 delay();
}
void delay()
{
int i;
for(i=0;i<30000;i++);
}