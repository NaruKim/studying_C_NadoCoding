#include <stdio.h>
#include <time.h>

int main_condition(void) {
	/*if (age > 20)
		printf("일반인 입니다.");
	else
		printf("학생입니다.");*/

		/*
	if (age >= 8&& age < 14)
		printf("초등학생");
	if (age >= 14&& age < 17)
		printf("중학생");
	if (age >= 17 && age < 20)
		printf("고등학생");*/

	/*int age = 17;
	if (age >= 8 && age < 14)
		printf("초등학생");
	else if (age < 17)
		printf("중학생");
	else if (age < 20)
		printf("고등학생");
	else
		printf("성인");*/

	/*for (int i = 1; i < 30; i++) {
		if (i > 5) {
			printf("나머지는 집에 가");
			break;
		}
		printf("%d 번 학생은 발표 준비를 하시오\n", i);
	}*/

	/*for (int i = 0;i<30; i++) {
		if (i > 5 && i < 10) {
			if (i == 7) {
				printf("%d 번 학생 집에가\n", i);
				continue;
			}
			printf("%d 번 학생 발표 ㄱㄱ\n", i);
		}
	}*/

	/*for(int i=0;i<11;i++)
	{
		printf("aaa%d\n", i);
		if (i > 2) {
			if (i >5 ) {
				if (i >= 9)
					printf("이거 되냐?%d\n",i);
				if (i > 8) {
					printf("    kkk%d\n", i);
					continue;
				}
				printf("  ccc%d\n", i);
			}
			printf(" bbb%d\n", i);
		} 
	}*/

	//int a = 9;
	//int b = 10;
	//int c = 12;
	//int d = 13;
	//if (a == b || c == d) {
	//	printf("a=b or c=d");
	//}
	//else {
	//	printf("다르다");
	//}

	//srand(time(NULL));
	//int i = rand() % 3; //가위0바위1보2
	//if (i == 0) {
	//	printf("가위\n");
	//}
	//else if (i == 1) {
	//	printf("바위\n");
	//}
	//else if (i == 2) {
	//	printf("보\n");
	//}
	//else {
	//	printf("몰라");
	//}
	
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i) {
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default:printf("몰라\n"); break;
	}

	int age;
	age = 10;
	switch (age) {
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:printf("초등학생"); break;
	case 14:
	case 15:
	case 16:printf("중학생"); break;
	case 17:
	case 18:
	case 19:printf("고등학생"); break;
	default:printf("학생이 아니다");
	}*/

	srand(time(NULL));
	int n = rand() % 100 + 1;
	printf("숫자: %d\n", n);
	int chance = 5;
	int answer;
	while (chance > 0) {
		printf("남은 기회 %d번\n", chance--);
		printf("맞혀봐: ");
		scanf_s("%d", &answer);

		if (chance == 0) {
			printf("\n끝났어 잘가");
			break;
		}

		if (answer > n)
			printf("down");

		else if (answer < n)
			printf("up");
		
		else if (answer==n){
			printf("맞혔어");
			break;
		}
		
		else {
			printf("뭐냐이건");
		}
	}
//int i = 0;
//int j = 0;
//while (1) {
//	printf("%d\n", i);
//	i++;
//	if (i == 10)
//		break;
//}
//while (1) {
//	printf("%d\n", i);
//	i--;
//	if (i == 0)
//		break;


	return 0;
}