#include <stdio.h>

int main_loop(void) {
	//printf("hello world");
	/*int a = 10;
	printf("%d\n",a);
	a++;
	printf("%d\n",a);
	a++;
	printf("%d\n\n", a);

	int b = 20;
	printf("b=%d\n", b);
	printf("++b=%d\n", ++b);
	printf("b++=%d\n", b++);
	printf("b=%d", b);*/

	/*for (int i = 1; i <= 10; i++) {
		printf("hello world %d\n",i);
	}*/

	/*int i = 0;
	while (i < 10) {
		printf("hello world %d\n", i);
		i++;
	}
	printf("i=%d\n", i);
	i = 0;
	do {
		printf("hello world %d\n", i);
		i++;
	} while (i < 10);*/

	/*for (int i = 0; i < 3; i++) {
		printf("i=%d\n", i);
		for (int j = 0; j < 5; j++) {
			printf("  j=%d\n", j);
		}
	}*/

	/*for (int i = 1; i < 20; i++) {
		printf("%d단\n", i);
		for (int j = 1; j < 20; j++) {
			printf(" %d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}*/

	/*int n;
	printf("몇단?");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("ㅁ");
		}
		printf("\n");
	}*/

	/*int n;
	printf("몇단?:");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			printf(" ");
		}
		for (int k = 0; k < i; k++) {
			printf("ㅁ");
		}
		printf("\n");
	}*/

	int floor;
	printf("몇층으로 쌓겠나?: ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor; j++) {
			printf(" ");
		}
		for (int k = 0; k < i*2+1; k++) {
			printf("a");
		}
		printf("\n");
	}

	return 0;
}