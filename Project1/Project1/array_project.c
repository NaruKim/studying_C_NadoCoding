#include <stdio.h>
#include <time.h>
int main_array_project(void) {
	srand(time(NULL));
	printf("\n\n ��Ӹ� ���� \n\n");
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

		printf(">%d��° �õ�", i + 1);
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
		printf("������ �Ӹ��� �ٸ��ϴ�\n");
		if (included == 1)
			printf("���� �Ӹ��� �ڶ����ϴ�\n");
		else
			printf("���� ��Ӹ� ����\n");
		
		printf("��� �ҰŸ� �ƹ� Ű�� ����.");
		getchar();
	}

	printf("\n�߸����� ����ϱ�?");
	scanf_s("%d", &answer);
	if (answer == treatment+1)
		printf("����");
	else
		printf("Ʋ��. ������ %d",treatment+1);
	return 0;
}