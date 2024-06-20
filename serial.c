#include<reg51.h>
void init();
void tx(char ch);
char rx();
void main()
{
	init();
	tx('h');
	tx('k');
	tx('g');
while(1){
	tx(rx());
}
}
void init()
{
	SCON=0x50;
	TMOD=0x20;
	TH1=0xfd;
	TR1=1;
}
void tx(char ch)
{
	SBUF=ch;
	while(TI==0);
	TI=0;
}
char rx()
{
	while(RI==0);
	RI=0;
	return SBUF;
}