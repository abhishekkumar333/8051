#include<reg51.h>
sbit a=P1^3;
sbit b=P1^2;
sbit c=P1^1;
sbit d=P1^0;
void delay();
void delay1();
void main()
{


   while(1)
   {
   a=1;
   delay();
   b=1;
   delay();
   c=1;
   delay();
   d=1;
   delay();
   }
/* a=0;
 //P2=0x88;
 //delay();
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
 P2=0xEB;
 delay1();
 
b=0;
P2=0x88;
delay1();
b=1;*/
}
void delay()
 
 {
 int i,k;
 for(i=0;i<5;i++)
 {
 for(k=0;k<3000;k++);
 }
 }
 
void delay1()
 
 {
 int j;
 for(j=0;j<3000;j++);
 }