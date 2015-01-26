#include<reg51.h>
void delay();
sbit RS=P3^2;
sbit RW=P3^1;
sbit EN=P3^0;
#define Dataport P2
//unsigned char g_bydata=0Xff;
void lcd_cmd(unsigned char p_bycmd)
{
RS=0;
RW=0;
Dataport=p_bycmd;
EN=1;
delay();
EN=0;
}
void lcd_dat(unsigned char p_bydata)
{
RS=1;
RW=0;
Dataport=p_bydata;
EN=1;
delay();
EN=0;
}
void lcd_init()
{
lcd_cmd(0X38);
delay();
lcd_cmd(0x0E);
delay();
lcd_cmd(0xC0);
delay();
}
void display_row(unsigned char p_byrow,unsigned char p_byDataArr[16])
{
//row=0;
//row=1;
unsigned char count,ch;
if(p_byrow)
lcd_cmd(0Xc0);
else
lcd_cmd(0X80);
for(count=0;count<16;count++)
{
if(ch=p_byDataArr[count])
lcd_dat(ch);
else
while(count<16)
{
lcd_dat(' ');
count++;
}
}
}
void main()
{
lcd_init();
while(1)
{ 
display_row(0,"Dharmender");
display_row(1,"Jitender");
lcd_cmd(0x07);
lcd_cmd(0x01);
display_row(0,"Abhishek");
display_row(1,"Kumar");
lcd_cmd(0x07);


}
}

void delay()
{
int i;
for(i=0;i<30000;i++)
{}
}