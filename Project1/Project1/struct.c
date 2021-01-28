#include<stdio.h>
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendgame;
};

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendgame;
}GameIn;

struct test {
	int a;
	int b;
};


int main_struct(void) {
	char* name = "My Game";
	int year = 2017;
	int price = 50;
	char* company = "My Company";

	char* name2 = "Your Game";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "Your Company";

	struct GameInfo game1;
	game1.name = "My Game";
	game1.year = 2017;
	game1.price = 50;
	game1.company = "My Company";

	struct GameInfo game2 = { "Your Game", 2018, 100, "Your Company" };

	//struct GameInfo game3;
	//game3 = { "Game3", 2019, 150, "Company3" }; 이건 안되네.

	printf("---game1---\n");
	printf("%s\n%d\n%d\n%s\n", game1.name, game1.year, game1.price, game1.company);
	printf("---game2---\n");
	printf("%s\n%d\n%d\n%s\n", game2.name, game2.year, game2.price, game2.company);

	struct GameInfo gameArray[2] = {
		{"Array1",2020,150,"Array1 Company"},
		{"Array2",2021,200,"Array2 Comapny"}
	};

	printf("---ArrayGame---\n");
	printf("Name:	%s\nYear:	%d\nPrice:	%d\nCompany:	%s\n", gameArray[0].name, gameArray[0].year, gameArray[0].price, gameArray[0].company);

	printf("\n\n-----포인터 복습-----\n");
	int a = 3; //Ellie
	int* b = &a; //Naru
	printf("a=%d, b=%d\n a=%d, &a=%d\n *b=%d, &b=%d", a, b, a, &a, *b, &b);
	printf("\n----------\n");

	struct GameInfo* gamePtr;
	gamePtr = &game1;
	printf("Name : %s\n", gamePtr[0].name);
	printf("Year : %d\n", gamePtr->year);
	printf("Price : %d\n", (*gamePtr).price);
	printf("Company : %s\n", (*gamePtr).company);

	printf("\n-----친구-----\n");
	game1.friendgame = &game2;
	printf("Name : %s\n", game1.friendgame[0].name);
	printf("Year : %d\n", game1.friendgame->year);
	printf("Price : %d\n", game1.friendgame[0].price);
	printf("Company : %s\n", game1.friendgame->company);
	printf("\n-------------\n");

	//TypeDef
	//study
	typedef int 나루;
	typedef float 엘리;
	나루 Naru = 3;
	엘리 Ellie  = 3.21;
	printf("정수=%d, 실수=%.2f \n", Naru, Ellie);

	typedef struct GameInfo 게임정보;
	게임정보 game4;
	game4.name = "한글";
	game4.year = 2809;
	printf("game4.name=%s\ngame4.year=%d\n", game4.name, game4.year);

	GameIn GameIn2;
	GameIn2.name = "TestGame";
	GameIn2.year = 2084;
	GameIn2.price = 700;
	GameIn2.company = "TEstC";
	printf("\n%s,%d,%d,%s", GameIn2.name, GameIn2.year, GameIn2.price, GameIn2.company);

	printf("\n-----TEST------");
	struct test test1;
	test1.a = 0;
	test1.b = 1;
	printf("%d, %d\n", test1.a, test1.b);
	test1.a = 1;
	printf("%d, %d\n", test1.a, test1.b);

	return 0;
}