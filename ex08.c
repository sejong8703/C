#include <stdio.h>
void main() {
	//���ǹ� : if~, if~else, if~else if~else, switch~xose~break
	int edps = 92;
	int db = 97;
	int pg = 97; 
	//scanf("��ǻ���Ϲ� �� : %d\n", &edps);	
	//scanf("������ ���̽�  ���� : %d\n", &db);
	//scanf("���α׷���  ���� : %d\n", &pg);
	char pass='f';
	float avg = 0.0f;
	// ����� 60 �̻��̸� pass�� T, �ƴϸ� F 
	int tot = (edps + db + pg);
	avg = (float) tot/3;
	if(avg>=60) pass='T';
	// pass�� t�̸� �հ� f�� ���� 
	printf("�հݿ���: ");
	if(pass=='T'){ 
		printf("�հ�\n"); 
	} else {
		printf("���հ�\n");
	}
	// ��� 90�̻� �� 80�̻� �� 70�̻� �� 60�̻� �� 60���� ��
	printf("���� ����: ");
	if (avg>=90){
		printf("��\n");
	} else if(avg>=80){
		printf("��\n");
	} else if(avg>=70){
		printf("��\n");
	} else if(avg>=60){
		printf("��\n");
	} else {	
		printf("��\n");
	}
	// ���� ��� ���� - � �����̶� 95�� �̻��̸�, '������' �ƴϸ� ����
	printf("���� ��� ���� : ");
	if(edps>=95 || db>=95 || pg>=95){
		printf("������\n");
	} else {
		printf("����\n");
	}
	
	
	// ������� = ��� ������ 90 �̻��̸�, '��� ���л�', �ƴϸ� '�Ϲ�' 
	printf("������� : ");
	if(edps>=95 && db>=95 && pg>=95){
			printf("�������\n");
	} else {
		printf("�Ϲ�\n"); 
	}
	
	// ��� : 10���� ���� ������ 10 �Ǵ� 9�̸�, 1���, 8�̸�, 2���
	// 7�̸�, 3���, �������� 5��� (switch~case~break Ȱ��) 
	int grade = avg / 10;
	printf("���� ��� : ");
	switch(grade) {
		case 10:
		case 9:
			printf("1���\n");
			break;
		case 8:
			printf("2���\n");
			break;
		case 7:
			printf("3���\n");
			break;						
		default:	
			printf("5���\n");			
				
	} 
	
	
}
