#include <stdio.h>
void main(){
	//진법 변환
	int a = 0b110101;  //2진수 (Binary) 대입 - 숫자 앞에 0b로 시작 
	int b = 0572;		//8진수 대입 - 숫자 앞에 0으로 시작 
	int c = 0x3e6;		// 16진수 대입 - 숫자 앞에 0x로 시작 
	int d = 365;		// 10진수 대 
	printf("2진수 0b110101 -> %d\n", a); 
	printf("8진수 0572 -> %d\n", b); 
	printf("16진수 0x3e6 -> %d\n", c); 
	printf("10수 365 -> %d\n", d);
	
	printf("10진수 365를 8진수로 출력 : %#o\n", d);
	printf("10진수 365를 16진수로 출력 : %#x\n", d); 
	
}
