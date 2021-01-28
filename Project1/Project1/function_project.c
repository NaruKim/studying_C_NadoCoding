#include <stdio.h>
#include <time.h>

int getRandomNumber(int n);
int getRandomNumber(int n);
void showQuestion(int n,int m,int i);
void success();
void fail();

int main_function_project(void) {
	int count = 0;
	printf("�������\n");
	for (int i = 1; i < 6; i++) {
		srand(time(NULL));
		int n = getRandomNumber(i);
		int m = getRandomNumber(i);
		showQuestion(n,m,i);
		int answer;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("���α׷� ����");
			exit();
		}
		else if (answer == n * m) {
			//printf("�����Դϴ�\n");
			success();
			count++;
		}
		else {
			//printf("Ʋ�Ƚ��ϴ�");
			fail();
		}
	}
	printf("\nRespondiste correctamente en %d preguntas\n", count);
	return 0;
}

int getRandomNumber(int n) {
	return rand() % (n * 7);
}
void showQuestion(int n, int m, int i) {
	printf("\n%d��° ��й�ȣ\n", i);
	printf("%d x %d = ?", n, m);
	printf("���� �Է��ϼ��� (���� = -1) : ");
}
void success() {
	printf("Right Answer\n");
	
}
void fail() {
	printf("Wrong Answer\n");

}