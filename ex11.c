#include <stdio.h>
void main(){
	int i;
	int j;
	int tab;

	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
			printf("%d*%d=%d\t",j, i, i*j); 
			}
	printf("\n");
	
		} 	

	//�Է��� ������ ���� ���
	int dan; //�Լ� �� �� 
	printf("\n\n�� �Է�", ");    
	 scanf("%d", &dan); 
	gugudan(dan);   //�Լ��� ȣ�� 
	//��� �Լ��� ���ǰ� �Ǿ� �־�� �ϸ�, ȣ��Ǹ�, ���ް��� �νĵǾ� ó���ȴ�. 
}

void gugudan(int su){    //�Լ��� ���� 
	int a;
	for(a=1;a<=9;a++){
		printf("%d*%d=%d\t", a, su, a*su);
	} 
	
	
}






	
