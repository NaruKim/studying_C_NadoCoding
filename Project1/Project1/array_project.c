#include <stdio.h>
#include <time.h>
int main_array_project(void) {
	srand(time(NULL));
	printf("\n\n 대머리 ㅉㅉ \n\n");
	int answer;
	int treatment = rand() % 4;
	int cntbottle = 0;
	int prebottle = 0;
	for (int i = 0; i < 4; i++) {
		int bottle[4] = { 0,0,0,0 };
		do {
			cntbottle = rand() % 2 + 2;
		} while (cntbottle == prebottle);
		prebottle = cntbottle;

		int included = 0;

		printf(">%d번째 시도", i + 1);
		for (int j = 0; j < cntbottle; j++) {
			int randbottle = rand() % 4;
			if (bottle[randbottle] == 0) {
				bottle[randbottle] = 1;
				if (randbottle == treatment) {
					included = 1;
				}
			}
			else {
				j--;
			}
		}
		for (int k = 0; k < 4; k++) {
			if (bottle[k] == 1)
				printf("%d ", k + 1);
		}
		printf("물약을 머리에 바릅니다\n");
		if (included == 1)
			printf("성공 머리가 자랐습니다\n");
		else
			printf("실패 대머리 ㅉㅉ\n");
		
		printf("계속 할거면 아무 키나 눌러.");
		getchar();
	}

	printf("\n발모제는 몇번일까?");
	scanf_s("%d", &answer);
	if (answer == treatment+1)
		printf("정답");
	else
		printf("틀림. 정답은 %d",treatment+1);
	return 0;
}