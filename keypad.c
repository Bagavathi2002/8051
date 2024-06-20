
void keypad();
void keypad{
	while(1){
		r1=r2=r3=r4=c1=c2=c3=1;
		r1=0;
		if(c1==0){
			P2=0xF9;
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
}