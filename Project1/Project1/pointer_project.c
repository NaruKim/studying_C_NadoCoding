#include<stdio.h>
#include<time.h>

int level;
int arrayFish[6];
int* cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int main_pointer_project(void) {
	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;
	
	int num = 0;
	initData();

	cursor = arrayFish;

	startTime = clock();

	while (1) {
		printfFishes();
		printf("몇번 어항에 물을 줄래? ");
		scanf_s("%d", &num);
		if (num > 7 || num<1) {
			printf("\n입력값이 잘못됬다.\n");
			continue;
		}
		totalElapsedTime = (clock() - startTime)/CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);
		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] < 1) {
			printf("%d번 물고기는 이미 사망\n", num);
		}
		else if (cursor[num - 1] < 100) {
			printf("%d 번 어항에 물을 준다\n", num);
			cursor[num - 1] += 1;
		}
		if (totalElapsedTime / 20 > num - 1) {
			level++;
			printf("\n%레벨에서 %레벨로 진화\n", level - 1, level);
			if (level == 5) {
				printf("최고레벨 달성. 게임종료\n");
				exit(0);
			}
		}
		if (checkFishAlive() == 0)
		{
			printf("물고기 다죽음.\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아있다/\n");

		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

void printfFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번 \n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf(" %4d ", arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3*(int)elapsedTime);
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive() {
	for (int i = 0; i < 6; i++)
		if (arrayFish[i] == 1)
			return 0;
	return 1;
}