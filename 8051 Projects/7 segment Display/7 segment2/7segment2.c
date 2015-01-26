#include<reg51.h>
sbit a=P3^7;
sbit b=P3^6;
sbit c=P3^5;
sbit d=P3^4;
void delay(int );
void selectDisplay(unsigned int i)
{
	if(i==1)
	{
		a = 0;
		b = 1;
		c = 1;
		d = 1;
	}
	else if(i==2)
	{
		a = 1;
		b = 0;
		c = 1;
		d = 1;
	}
	else if(i==3)
	{
		a = 1;
		b = 1;
		c = 0;
		d = 1;
	}
	else
	{
		a = 1;
		b = 1;
		c = 1;
		d = 0;
	}
}
void main()
{
int z,w,e,r;
unsigned int q[]={0x88,0xEB,0x4C,0x49,0x2B,0x19,0x18,0x8B,0x08,0x0B,0xEB};
for(;;)
{
selectDisplay(1);
P2=q[0];
delay(5);

selectDisplay(2);
P2=q[0];
delay(5);

selectDisplay(3);
P2=q[0];
delay(5);

selectDisplay(4);
P2=q[0];
delay(5);

for(z=0;z<9;z++)
{
selectDisplay(1);
P2=q[z];
delay(5);

selectDisplay(2);
P2=q[0];
delay(5);

selectDisplay(3);
P2=q[0];
delay(5);

selectDisplay(4);
P2=q[0];
delay(5);
}
for(w=0;w<9;w++)
{
selectDisplay(1);
P2=q[z];
delay();
selectDisplay(2);
P2=q[w];
delay(5);
selectDisplay(3);
P2=q[0];
delay(5);

selectDisplay(4);
P2=q[0];
delay(5);
}
for(e=0;e<9;e++)
{
selectDisplay(1);
P2=q[z];
delay(5);

selectDisplay(2);
P2=q[w];
delay(5);

selectDisplay(3);
P2=q[e];
delay(5);

selectDisplay(4);
P2=q[0];
delay(5);
}
for(r=0;r<9;r++)
{
selectDisplay(1);
P2=q[z];
delay(5);

selectDisplay(2);
P2=q[w];
delay(5);

selectDisplay(3);
P2=q[e];
delay(5);
selectDisplay(4);
P2=q[r];
delay(5);
}
} 
}
void delay(int t)
 
 {
 int i,k;
 for(i=0;i<t;i++)
 {
 for(k=0;k<3000;k++);
 }
 }
 