#include <stdio.h>
//함수의 종류 : 매개변수와 반환값에 따라 나뉨
// 매개변수도 없고, 반환값도 없는 경우
void fn1(){
	printf("매개변수도 없고, 반화값도 없는 경우 ~ 함수1");
} 
//매개변수는 있으나, 반환값이 없는 경우
void fn2(int a){
	printf("전달한 값: %d, 제곱결과: %d\n", a, a*a);
} 
//매개변수는 없으나, 반환값이 있는 경우 
int fn3(){
	int a = 1004;
	return a/2;
} 
//매개변수와 반환값이 모두 존재하는 경우 
float fn4(int su1, int su2, float  pi){
	return su1*su2*pi;
}
void main(){
	fn1();
	fn2(8);
	int a = fn3();
	printf("반환값이 있는 데이터 : %d\n", a);
	float b = fn4(32, 27, 3.14);
	printf("전달한 값: %d %d, 받은 결과값 : %f\n", 32, 27, b); 
	
	
} 
