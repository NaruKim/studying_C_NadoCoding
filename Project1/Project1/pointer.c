#include<stdio.h>
//void showhitman(int* n);
void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* n);

int main_pointer(void) {
	/*
	int a = 1, b = 2, c = 3;
	printf("a Address : %d\t Password : %d\n", &a, a);
	printf("b Address : %d\t Password : %d\n", &b, b);
	printf("c Address : %d\t Password : %d\n", &c, c);

	int *k=&c;
	printf("%d, %d\n%d, %d\n", k, *k, &c, c);
	k = &b;
	printf("%d, %d\n", k, *k);

	int *m = &b;
	int* n = &m;
	printf("%d %d", *n, *m);

	printf("\n=====================\n");

	int* hitman;
	hitman = &a;
	printf("a:%d\t", a);
	*hitman *= 3;
	printf("a:%d\n", a);
	showhitman(hitman);

	hitman = &b;
	printf("b:%d\t", b);
	*hitman *= 3;
	printf("b:%d\n", b);
	showhitman(hitman);

	int* anotherman;
	anotherman = &c;
	printf("c:%d\t", c);
	*anotherman *= 3;
	printf("c:%d\n", c);
	showhitman(&c);

	anotherman = &hitman;
	printf("%d, %d, %d, %d", anotherman, *anotherman, hitman, *hitman);*/

	//int arr[3] = { 5,12,154 };
	//int* ptr = arr;
	//printf("ptr=%d\tarr=%d \n", ptr, arr);
	//for (int i = 0; i < 3; i++)
	//	printf("arr[%d]=%d\n", i, arr[i]);
	//for (int i = 0; i < 3; i++)
	//	printf("ptr[%d]=%d\n", i, ptr[i]);
	//printf("\n============\n");
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//for (int i = 0; i < 3; i++)
	//	printf("arr[%d]=%d\n", i, *(arr+i));
	//for (int i = 0; i < 3; i++)
	//	printf("ptr[%d]=%d\n", i, *(ptr+i));
	//printf("\n=============\n");
	//printf("arr value=%d\n", arr);
	//printf("arr[0]address=%d\n", &arr[0]);
	//printf("arr[0]address+1=%d\n", &arr[0]+1);
	//printf("arr[1]address=%d\n", &arr[1]);
	//printf("arr[2]address=%d\n", &arr[2]);
	//printf("*&arr[0]=%d\n", *&arr[0]);
	//printf("*arr=%d\n", *arr);

	////SWAP
	//int a = 10, b = 20;
	//printf("a:address=%d\n", &a);
	//printf("b:address=%d\n", &b);
	//printf("swap 함수 전 a=%d, b=%d\n", a, b);
	//swap(a, b);
	//printf("swap 함수 후 a=%d, b=%d\n", a, b);
	//printf("주소값 전달\n");
	//printf("a:address=%d\nb:address=%d\n", &a, &b);
	//printf("swap_addr 함수 전 a=%d, b=%d\n", a, b);
	//swap_addr(&a, &b);
	//printf("swap_addr 함수 후 a=%d, b=%d\n", a, b);

	int arr[3] = { 10,20,30 };
	changeArray(arr);
	for (int i = 0; i < 3; i++)
		printf("%d\n", arr[i]);

	return 0;
}
void swap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	printf("a:address=%d\n", &a);
	printf("b:address=%d\n", &b);
	printf("swap 함수 안 a=%d, b=%d\n", a, b);
}
void swap_addr(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("swap_addr 함수 안 a:address=%d\n", &a);
	printf("sway_addr 함수 안 b:address=%d\n", &b);
	printf("swap_addr 함수 안 a=%d, b=%d\n",* a, *b);
}
void changeArray(int* n) {
	n[2] = 50;
}
//
//void showhitman(int* n) {
//	printf("%d address: %d\n", *n, n);
//}