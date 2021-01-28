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
		printf("��� ���׿� ���� �ٷ�? ");
		scanf_s("%d", &num);
		if (num > 7 || num<1) {
			printf("\n�Է°��� �߸����.\n");
			continue;
		}
		totalElapsedTime = (clock() - startTime)/CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n", prevElapsedTime);
		decreaseWater(prevElapsedTime);

		if (cursor[num - 1] < 1) {
			printf("%d�� ������ �̹� ���\n", num);
		}
		else if (cursor[num - 1] < 100) {
			printf("%d �� ���׿� ���� �ش�\n", num);
			cursor[num - 1] += 1;
		}
		if (totalElapsedTime / 20 > num - 1) {
			level++;
			printf("\n%�������� %������ ��ȭ\n", level - 1, level);
			if (level == 5) {
				printf("�ְ��� �޼�. ��������\n");
				exit(0);
			}
		}
		if (checkFishAlive() == 0)
		{
			printf("����� ������.\n");
			exit(0);
		}
		else {
			printf("����Ⱑ ���� ����ִ�/\n");

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
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d�� \n", 1, 2, 3, 4, 5, 6);
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