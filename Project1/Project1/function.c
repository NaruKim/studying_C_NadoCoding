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
	//printf("n은%d\n", n);
	//p(n);
	//n += 3; //n=n+3
	//printf("n은%d\n", n);
	//p(n);
	//n -= 1; //n=n-1
	//printf("n은%d\n", n);
	//p(n);
	//n *= 4; //n=n*4
	//printf("n은%d\n", n);
	//p(n);
	//n /= 3; //n=n/3
	//printf("n은%d\n", n);
	//p(n);
	
	//function_without_return();
	/*int pp = function_with_return();
	p(pp);*/

	//function_without_params();
	
	//function_with_params(1,2,4);

	//int ret = apple(5, 2);
	//printf("나오냐 %d\n", ret);
	//printf("사과 %d개 중에 %d개를 먹으면 %d개가 남음", 10, 6, apple(10, 6));

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
	printf("n은 %d입니다.\n", n);
}
void function_without_return() {
	printf("반환값없음\n");
}
int function_with_return() {
	printf("반환값있음\n");
	return 5;
}
void function_without_params(){
	printf("전달값없음");
}
void function_with_params(int a, int b, int c) {
	printf("전달값: %d, %d, %d", a, b, c);
}
int apple(int total, int ate) {
	printf("전달값과 반환값이 있다.\n");
	return total - ate;
}
int add(int n, int m) {
	printf("add함수 작동\n");
	return n+m;
}
int sub(int n, int m) {
	printf("sub함수 작동\n");
	return n - m;
}
int mul(int n, int m) {
	printf("mul함수 작동\n");
	return n * m;
}
int div(int n, int m) {
	printf("div함수 작동\n");
	return n / m;
}
int cal(int n, int m, char k) {
	if (k == "add") {
		return n + m;
	}
	else return 0;
}