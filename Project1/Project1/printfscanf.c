#include <stdio.h>

int main_printfscanf(void)
{
	/*
	float f = 46.5f;
	float f2 = 46.5;

	printf("%.2f\n", f);
	printf("%.3f\n", f2);

	double w = 4.372;
	printf("%lf\n", w);
	printf("%.1lf\n", w);
	*/

	//int add = 3 + 7;
	//printf("3+7=%d\n", add);
	//printf("%dx%d=%d\n", 30, 79, 30 * 79);

	/*
	int input;
	printf("input�� �Է� ����: ");
	scanf_s("%d", &input);
	printf("input�� :%d\n", input);
	*/

	/*int one, two, three;
	printf("one, two, three�� �� �Է�: ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("one: %d\n", one);
	printf("two: %d\n", two);
	printf("three: %d", three);
	*/

	/*char c = 'a';
	printf("%c\n", c);
	int n = c + 1;
	printf("%c", n);*/

	/*char str[5];
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);*/

	char name[256];
	printf("�̸��� ����? : "); 
	scanf_s("%s", name, sizeof(name)); //name�� �̹� �ּ��̱� ������ &�� ��� �ȴ�
	
	int age;
	printf("���̴�? : ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ�? : ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű��? : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� �˸��̳�? : ");
	scanf_s("%s", &what, sizeof(what));

	printf("\n\n----�Ż�----\n");
	printf("�̸�: %s\n", name);
	printf("����: %d\n", age);
	printf("������: %.2f\n", weight);
	printf("Ű��: %.2lf\n", height);
	printf("�˸�: %s\n", what);

	return 0;
}
