#include <stdio.h>

int main_array(void) {
	/*
	int subway1 = 30;
	int subway2 = 40;
	int subway3 = 50;
	printf("����ö 1ȣ ���� %d���� Ÿ���ִ�.\n", subway1);
	printf("%d personas estan en el metro 2\n", subway2);
	printf("%d people are in the train 3\n", subway3);*/
	
	/*int subway_array[3];
	subway_array[0] = 30;
	subway_array[1] = 40;
	subway_array[2] = 50;

	for (int i = 0; i < 3; i++) {
		printf("%d personas estan en el metro %d.\n", subway_array[i], i + 1);
	}*/
	
	////�� ���� ���
	//float arr[5] = {1.0f, 2.0f, 3.0f };
	//for (int i=0; i < 10; i++)
	//	printf("%.2f ", arr[i]);

	/*char c = 'c';
	printf("%c\n", c);

	char str[6] = "coding";
	printf("%s\n", str);

	char str2[7] = "coding";
	printf("%s\n", str2); //\0�� ���Ѵ�

	char str3[] = "coding";
	printf("%s\n", str3);
	printf("%d\n", sizeof(str3));

	for (int i = 0; i < sizeof(str3); i++) {
		printf("%c\n", str3[i]);
	}*//*
	char kor[] = "������";
	printf("%s\n", kor);
	printf("%d\n", sizeof(kor));*/
	//
	//char name[256];
	//printf("What is your name :");
	//scanf_s("%s", name, sizeof(name)); //Porque no necesita & enfrente de name?
	//printf("%s", name);

	//printf("%c=%d\n", '2', '2');
	//printf(" -");
	
	for (int i = 0; i < 128; i++)
		printf("%d=%c\n", i, i);
	

	return 0;
}