#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_random(void) {

	//srand(time(NULL));	//난수초기화
	//int num = rand()%3;	//0,1,2
	
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		printf("%d ", rand()%10);

	printf("\n");
	
	for (int i = 0; i < 10; i++)
		printf("%d ", rand()%10);
	
	return 0;
}