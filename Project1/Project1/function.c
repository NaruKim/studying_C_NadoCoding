#include <stdio.h>

void p(int n);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int a, int b, int c);
int apple(int total, int ate);
int add(int n, int b);
int sub(int n, int m);
int mul(int n, int m);
int div(int n, int m);
int cal(int n, int m, char k);

int main_function(void) {
	//int n = 3;
	//printf("n��%d\n", n);
	//p(n);
	//n += 3; //n=n+3
	//printf("n��%d\n", n);
	//p(n);
	//n -= 1; //n=n-1
	//printf("n��%d\n", n);
	//p(n);
	//n *= 4; //n=n*4
	//printf("n��%d\n", n);
	//p(n);
	//n /= 3; //n=n/3
	//printf("n��%d\n", n);
	//p(n);
	
	//function_without_return();
	/*int pp = function_with_return();
	p(pp);*/

	//function_without_params();
	
	//function_with_params(1,2,4);

	//int ret = apple(5, 2);
	//printf("������ %d\n", ret);
	//printf("��� %d�� �߿� %d���� ������ %d���� ����", 10, 6, apple(10, 6));

	//int n = 3;
	//printf("%d\n",add(n, 6));
	//printf("%d", n);

	int n = 10;
	n=add(n, 3);
	p(n);
	n = sub(n, 2);
	p(n);
	n = mul(n, 5);
	p(n);
	n = div(11, 4);
	p(n);

	return 0;
}

void p(int n) {
	printf("n�� %d�Դϴ�.\n", n);
}
void function_without_return() {
	printf("��ȯ������\n");
}
int function_with_return() {
	printf("��ȯ������\n");
	return 5;
}
void function_without_params(){
	printf("���ް�����");
}
void function_with_params(int a, int b, int c) {
	printf("���ް�: %d, %d, %d", a, b, c);
}
int apple(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ�.\n");
	return total - ate;
}
int add(int n, int m) {
	printf("add�Լ� �۵�\n");
	return n+m;
}
int sub(int n, int m) {
	printf("sub�Լ� �۵�\n");
	return n - m;
}
int mul(int n, int m) {
	printf("mul�Լ� �۵�\n");
	return n * m;
}
int div(int n, int m) {
	printf("div�Լ� �۵�\n");
	return n / m;
}
int cal(int n, int m, char k) {
	if (k == "add") {
		return n + m;
	}
	else return 0;
}