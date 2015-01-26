#include<reg51.h>

sbit disp1 = P3^7;
sbit disp2 = P3^6;
sbit disp3 = P3^5;
sbit disp4 = P3^4;


void delay(unsigned int time)
{
	unsigned int i, j;
	for(i=0;i<30;i++)
		for(j=0;j<=time;j++)
		{}
}

void selectDisplay(unsigned int i)
{
	if(i==1)
	{
		disp1 = 0;
		disp2 = 1;
		disp3 = 1;
		disp4 = 1;
	}
	else if(i==2)
	{
		disp1 = 1;
		disp2 = 0;
		disp3 = 1;
		disp4 = 1;
	}
	else if(i==3)
	{
		disp1 = 1;
		disp2 = 1;
		disp3 = 0;
		disp4 = 1;
	}
	else
	{
		disp1 = 1;
		disp2 = 1;
		disp3 = 1;
		disp4 = 0;
	}
}



void main()
{
	
	unsigned int counter[] = {0x88,0xEB,0x4C,0x49,0x2B,0x19,0x18,0x8B,0x08,0x0B};

	unsigned int count = 0, c;
	unsigned int d1, d2, d3, d4, i;
	
	while(1)
	{
		d4 = count%10;
		c = count/10;
		d3 = c%6;
		c = c/6;
		d2 = c%10;
		d1 = c/10;
		for(i=0;i<9;i++)
		{
			selectDisplay(4);
			P2 = counter[d4];
			delay(5);

			selectDisplay(3);
			P2 = counter[d3];
			delay(5);

			selectDisplay(2);
			P2=counter[d2];
			delay(5);

			selectDisplay(1);
			P2=counter[d1];
			delay(5);

		}
		if(count!=9959)
			count++;
		else
			count=0;
	}
}