#include <stdio.h>
void main(){
	int a=20, b=30; 
	//��Ʈ ������(&, |, ^, ~, >>, <<)
	 

	
	printf("a&b : %d\n", a&b);
	printf("a|b : %d\n", a|b);
	printf("a^b : %d\n", a^b);
	printf("~a : %d\n", ~a);
	printf("a>>2 : %d\n", a>>2);
	printf("a<<2 : %d\n", a<<2);
	
	//��Ÿ������
	int rank = a>b ? 1 : 2; //tkagkddustkswk
	int c=50, d=60; //��ǥ ������
	printf("a>b ? 1 : 2 => %d\n", rank); //���� ������ ��� -> 2 
}

