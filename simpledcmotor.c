#include<reg51.h>
void delay(int x){
	int i,j;
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
		}
	}
}
void main(){
	P2=0x01;
	delay(20000000);
	P2=0x02;
	delay(2000);
}

	