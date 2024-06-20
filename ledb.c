#include<reg51.h>
void delay(int a)
{
	int i,j;
	for(i=0;i<a;i++){
		for(j=0;j<50;j++){
		}
	}
}
void main()
{
	while(1)
	{
		P2=0X01;
		delay(200);
		P2=0X00;
		delay(200);
	}
}
