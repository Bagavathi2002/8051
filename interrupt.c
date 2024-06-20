#include<reg51.h>
sbit led=P2^0;
void delay(int a);

void main()
{
	P2=0x00;
	TCON=0x01;
	IE=0x81;
	while(1){
	}
}
void isr() interrupt 0
{
	led=~led;
	delay(10);
}
void delay(int a)
{
	int i;
	for(i=0;i<a;i++){
	}
}
	
