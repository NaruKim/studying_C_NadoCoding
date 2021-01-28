#include <stdio.h>
#include <time.h>

int getRandomNumber(int n);
int getRandomNumber(int n);
void showQuestion(int n,int m,int i);
void success();
void fail();

int main_function_project(void) {
	int count = 0;
	printf("퀴즈시작\n");
	for (int i = 1; i < 6; i++) {
		srand(time(NULL));
		int n = getRandomNumber(i);
		int m = getRandomNumber(i);
		showQuestion(n,m,i);
		int answer;
		scanf_s("%d", &answer);
		if (answer == -1) {
			printf("프로그램 종료");
			exit();
		}
		else if (answer == n * m) {
			//printf("정답입니다\n");
			success();
			count++;
		}
		else {
			//printf("틀렸습니다");
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
	printf("\n%d번째 비밀번호\n", i);
	printf("%d x %d = ?", n, m);
	printf("답을 입력하세요 (종료 = -1) : ");
}
void success() {
	printf("Right Answer\n");
	
}
void fail() {
	printf("Wrong Answer\n");

}