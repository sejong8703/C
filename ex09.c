#include <stdio.h>
void main(){
	/*
	초기값 부여 식 
	while(조건식){
		반복실행문장1;
		증감식;
		반복실행문장2; 
	}
	*/
	//3의 배수이거나 5의 배수인 합을 계산
	
	int i=0;
	int sum = 0;
	while(i<100) {
		i++;
		
		if (i%3 == 0 || i%5 == 0 ){
			sum += i;
				}
		}
	printf("%d\n", sum);
	} 

 	
 	
 	
 	/*
 	for(초기값; 조건식;증감식){
	 	반복실행할 문장;
	}
	*/
	//1~100의 수소 출력하는 프로그램 
	int sw = 0;
	int n;
	for (n = 2; n <= 100; n++){  //1은 소수가 아니므로 생략 
		//1보다 크고 n보다 작은 숫자로 나눠 떨어지는지 확인 
		int div;
		for(div = 2; div < n; div++){
			if (n % div == 0){ //나눠 떨어졌으면 소수가 아님 
				sw = 1;
				break;		//이미 소수가 아닌 것을 확인 했으므로 루프 탈출 
			}	
		}		
		if(sw==0) {     //sw가 0이면 소수이므로 출력 
			printf("d\n", n);    //소수 출력 
		}
		sw = 0; //sw 초기화 
 	}
}

 	
 	/*
 	최소 1번 이상의 실행을 보장 
 	초기값 부여식; 
 	do {
 		반복실행문장1;
		 증감식;
		 반복식행문장2;
	} while(조건식);
	*/
	printf("\n"); 
	int a = 0;
	do{
		a++;
		printf(%d\n, a);
	} while(a>=10);
	
} 
 
 	
 	
 	
 	
 	
 	


	
