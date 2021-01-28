#include <stdio.h>
#include <time.h>

void initCats();
void printCat(int selected);
int checkCollection();

typedef struct {
	char* name;
	int age;
	char* character;
	int level;
}CAT;

int collection[5] = { 0,0,0,0,0 };

CAT cats[5];

int main_struct_project(void) {
	srand(time(NULL));
	
	initCats();
	while (1) {
		printf("어느 고양이를 뽑을까나?\n");
		getchar();
		
		int selected = rand() % 5;
		printCat(selected);
		collection[selected] = 1;

		int collectAll = checkCollection();
		if (collectAll == 1) {
			break;
		}
	}

	return 0;
}

void initCats() {
	cats[0].name = "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순함";
	cats[0].level = 1;

	cats[1].name = "귀요미";
	cats[1].age = 3;
	cats[1].character = "까칠함";
	cats[1].level = 2;

	cats[2].name = "수줍이";
	cats[2].age = 7;
	cats[2].character = "잠만보";
	cats[2].level = 3;

	cats[3].name = "까꿍이";
	cats[3].age = 2;
	cats[3].character = "요란함";
	cats[3].level = 4;

	cats[4].name = "돼냥이";
	cats[4].age = 1;
	cats[4].character = "배고픔";
	cats[4].level = 5;
}

void printCat(int selected) {
	printf("\n====네 고양이다====\n");
	printf("이름 : %s\n", cats[selected].name);
	printf("나이 : %d\n", cats[selected].age);
	printf("성격 : %s\n", cats[selected].character);
	printf("레벨 : ");
	for (int i = 0; i < cats[selected].level; i++) {
		printf("#");
	}
	printf("\n");
}

int checkCollection() {
	int collectAll = 1;
	printf("\n===고양이들===\n");
	for (int i = 0; i < 5; i++) {
		if (collection[i] == 0) {
			printf("%10s", "빈 박스");
			collectAll = 0;
		}
		else {
			printf("%10s", cats[i].name);
		}
	}
	printf("\n============\n");
	if (collectAll) {
		printf("축하한다.\n");
	}
	return collectAll;
}