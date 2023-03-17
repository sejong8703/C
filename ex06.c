#include <stdio.h>
void main(){
	int a=20, b=30; 
	//비트 연산자(&, |, ^, ~, >>, <<)
	 

	
	printf("a&b : %d\n", a&b);
	printf("a|b : %d\n", a|b);
	printf("a^b : %d\n", a^b);
	printf("~a : %d\n", ~a);
	printf("a>>2 : %d\n", a>>2);
	printf("a<<2 : %d\n", a<<2);
	
	//기타연산자
	int rank = a>b ? 1 : 2; //tkagkddustkswk
	int c=50, d=60; //쉼표 연산자
	printf("a>b ? 1 : 2 => %d\n", rank); //삼항 연산의 결과 -> 2 
}

