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
	printf("input값 입력 ㄱㄱ: ");
	scanf_s("%d", &input);
	printf("input값 :%d\n", input);
	*/

	/*int one, two, three;
	printf("one, two, three의 값 입력: ");
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
	printf("이름이 뭐냐? : "); 
	scanf_s("%s", name, sizeof(name)); //name은 이미 주소이기 때문에 &가 없어도 된다
	
	int age;
	printf("나이는? : ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는? : ");
	scanf_s("%f", &weight);

	double height;
	printf("키는? : ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 죄명이냐? : ");
	scanf_s("%s", &what, sizeof(what));

	printf("\n\n----신상----\n");
	printf("이름: %s\n", name);
	printf("나이: %d\n", age);
	printf("몸무게: %.2f\n", weight);
	printf("키는: %.2lf\n", height);
	printf("죄명: %s\n", what);

	return 0;
}
