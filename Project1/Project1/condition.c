#include <stdio.h>
#include <time.h>

int main_condition(void) {
	/*if (age > 20)
		printf("�Ϲ��� �Դϴ�.");
	else
		printf("�л��Դϴ�.");*/

		/*
	if (age >= 8&& age < 14)
		printf("�ʵ��л�");
	if (age >= 14&& age < 17)
		printf("���л�");
	if (age >= 17 && age < 20)
		printf("����л�");*/

	/*int age = 17;
	if (age >= 8 && age < 14)
		printf("�ʵ��л�");
	else if (age < 17)
		printf("���л�");
	else if (age < 20)
		printf("����л�");
	else
		printf("����");*/

	/*for (int i = 1; i < 30; i++) {
		if (i > 5) {
			printf("�������� ���� ��");
			break;
		}
		printf("%d �� �л��� ��ǥ �غ� �Ͻÿ�\n", i);
	}*/

	/*for (int i = 0;i<30; i++) {
		if (i > 5 && i < 10) {
			if (i == 7) {
				printf("%d �� �л� ������\n", i);
				continue;
			}
			printf("%d �� �л� ��ǥ ����\n", i);
		}
	}*/

	/*for(int i=0;i<11;i++)
	{
		printf("aaa%d\n", i);
		if (i > 2) {
			if (i >5 ) {
				if (i >= 9)
					printf("�̰� �ǳ�?%d\n",i);
				if (i > 8) {
					printf("    kkk%d\n", i);
					continue;
				}
				printf("  ccc%d\n", i);
			}
			printf(" bbb%d\n", i);
		} 
	}*/

	//int a = 9;
	//int b = 10;
	//int c = 12;
	//int d = 13;
	//if (a == b || c == d) {
	//	printf("a=b or c=d");
	//}
	//else {
	//	printf("�ٸ���");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; //����0����1��2
	//if (i == 0) {
	//	printf("����\n");
	//}
	//else if (i == 1) {
	//	printf("����\n");
	//}
	//else if (i == 2) {
	//	printf("��\n");
	//}
	//else {
	//	printf("����");
	//}
	
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0:printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	default:printf("����\n"); break;
	}

	int age;
	age = 10;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("�ʵ��л�"); break;
	case 14:
	case 15:
	case 16:printf("���л�"); break;
	case 17:
	case 18:
	case 19:printf("����л�"); break;
	default:printf("�л��� �ƴϴ�");
	}*/

	srand(time(NULL));
	int n = rand() % 100 + 1;
	printf("����: %d\n", n);
	int chance = 5;
	int answer;
	while (chance > 0) {
		printf("���� ��ȸ %d��\n", chance--);
		printf("������: ");
		scanf_s("%d", &answer);

		if (chance == 0) {
			printf("\n������ �߰�");
			break;
		}

		if (answer > n)
			printf("down");

		else if (answer < n)
			printf("up");
		
		else if (answer==n){
			printf("������");
			break;
		}
		
		else {
			printf("�����̰�");
		}
	}
//int i = 0;
//int j = 0;
//while (1) {
//	printf("%d\n", i);
//	i++;
//	if (i == 10)
//		break;
//}
//while (1) {
//	printf("%d\n", i);
//	i--;
//	if (i == 0)
//		break;


	return 0;
}