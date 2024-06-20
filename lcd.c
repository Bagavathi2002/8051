#include<reg51.h>
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
void lcd_init();
void lcd_cmd(unsigned char ch);
void lcd_data(unsigned char ch);
void lcd_string(char *str);
void delay(int a);
void main()
{
	lcd_init();
	lcd_string("Welcome");
	lcd_cmd(0xc0);
	while(1){
		r1=r2=r3=r4=c1=c2=c3=1;
		r1=0;
		if(c1==0){
			lcd_data('1');
			delay(50);
		}
		else if(c2==0){
			P2=0xA4;
			delay(50);
		}
		else if(c3==0){
			P2=0xB0;
			delay(50);
		}
	  r1=r2=r3=r4=c1=c2=c3=1;
		r2=0;
		if(c1==0){
			P2=0x99;
			delay(50);
		}
		else if(c2==0){
			P2=0x92;
			delay(50);
		}
		else if(c3==0){
			P2=0x82;
			delay(50);
		}
		r1=r2=r3=r4=c1=c2=c3;
		r3=0;
		if(c1==0){
			P2=0xF8;
			delay(50);
		}
		else if(c2==0){
			P2=0x80;
			delay(50);
		}
		else if(c3==0){
			P2=0x98;
			delay(50);
		}
	}
void lcd_init()
{
	lcd_cmd(0x38);
	lcd_cmd(0x0c);
	lcd_cmd(0x01);
	lcd_cmd(0x80);
}
void lcd_data(unsigned char ch){
	P2=ch;
	rs=1;
	rw=0;
	en=1;
	delay(10);
	en=0;
}
void lcd_cmd(unsigned char ch){
	P2=ch;
	rs=0;
	rw=0;
	en=1;
	delay(10);
	en=0;
}

void lcd_string(char *str){
	int k=0;
	while(str[k]!='\0'){
		lcd_data(str[k]);
		k++;
	}}
void delay(int a){
	int i,j;
	for(i=0;i<50;i++){
		for(j=0;j<50;j++){
		}
	}
}


	
	
	
	

	
