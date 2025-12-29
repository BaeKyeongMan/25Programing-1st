#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1. 포인터 복습
// int *numPtr = ;  포인터 선언 방식 자료형(*)
// *numPtr // 주소에 저장된 값을 역참조 

void SelectJob(int* xPTr, int* yPTR, int amountX, int amountY);
void Test2(const int* playerWallet);
void Test3();
void ShowInventoryInfo(int inventoryCount[], const char* inventoryText[]);
void AddInventory(int inventoryCount[], int index, int amount);

int main()
{
	printf("Test1 예제 코드 구현\n");
	int playerX = 0;
	int playerY = 0;
	int* playerXPtr = &playerX;
	int* playerYPtr = &playerY;
	SelectJob(playerXPtr, playerYPtr, 2, 5);
	printf("playerX 값 : %d, playerY 값 : %d\n", playerX, playerY);

	// 상수 지시 포인터가 왜 문법적으로 존재하는가?
	const double pi = 3.14;
	double* piPtr = &pi;
	(*piPtr) = (*piPtr) + 2;
	printf("pi 값 : %lf\n", pi);

	// 예제2. const int*로 선언된 포인터 변수는 그 값을 변경하지 못한다.
	int boxX = 10;
	const int* boxXPtr = &boxX;
	//(*boxXPtr) = (*boxXPtr) + 2; // 포인터에 저장되어 있는 값을 수정하지 마세요. 상수 지시 포인터 const pointer

	// 예제3. 상수 포인터. 포인터(주소) 바뀌지 않는다
	int box2 = 5;
	boxXPtr = &box2;
	printf("boxXPtr가 가리키고 있는 값 : %d\n", *boxXPtr);

	// 예제4. 함수에 상수 포인터 / 상수 지시 포인터를 직접 사용해보기
	// 배열을 하나 선언

	// inventory[0], [1], [2]
	// 42 ~ 49 다음 내용을 함수로 변경하여서, 원하는 위치에서 호출할 수 있게 만들어보세요.
	int inventory[3] = {100, 10, 5}; // 동전의 수, 레드 포션의 갯수, 약초의 수
	int inventory2[3] = {130, 5, 8};
	const char* inventoryText[3] = { "동전", "레드 포션", "약초" };

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("%s : %d개\t", inventoryText[i], inventory[i]);
	//}
	//printf("\n");
	//

    // 실습 예제1
    // ShowInventoryInfo inventory. player1 인벤토리, player2 인벤토리
    // player2가 현재 가지고 있는 인벤토리 데이터를 출력할 수 있게 만들어 보세요.

	inventory[0] += 100;
	
	AddInventory(inventory, 1, 5);
	ShowInventoryInfo(inventory, inventoryText);
	
	AddInventory(inventory2, 2, 3);
	ShowInventoryInfo(inventory2, inventoryText);
	// 인벤토리의 배열 유저들의 배열 정보를 받는 함수? -> 이 게임에 참여하고 있는 모든 유저의 데이터를 출력하는 무언가.

	//int playerWallet = 100;
	//Test2(&playerWallet);

	 //그래서 포인터를 playerWallet 주소로 넘기는 이유가 무엇인가?
}

// Test1함수를 보고 이 함수가 어떤 목적으로 사용이 될 건지 분석
// 첫번째 요소 : 주소를 전달받음 : 주소를 이용해서 무엇을 할 건인가? 정수형 주소를 전달받음
// 주소에 저장되어 있는 값을 변경해서 사용하겠다. 5 => amountX 더해서 이 더한 값으로 바꾸겠다.

void SelectJob(int *xPTr, int *yPTR, int amountX, int amountY) //두 값을 함수 안에서 변경하고 싶다 // 매개 변수
{
	*xPTr = (*xPTr) + amountX; // 역참조 연산자
	*yPTR = (*yPTR) + amountY;
	xPTr = xPTr + amountX;
	yPTR = yPTR + amountY;
}

void Test2(const int* playerWallet)
{
	// 플레이어가 가지고 있는 돈을 출력해줘

	printf("플레이어의 현제 소유 금액 : %d\n", *playerWallet);
}

// main 함수에서 가져와서 사용할 변수를 복사한 후에 함수의 선언 부분에서 매개변수에 타입을 복사해준다

void ShowInventoryInfo(int inventoryCount[], const char* inventoryText[])
{
	// int inventoryCount[] = main 함수에 있는 int 배열을 넣겠다. 주소를 넘기겠다
	// const char* inventoryText[] = main함수에 있는 const char* 배열을 넣겠다

	for (int i = 0; i < 3; i++)
	{
		printf("%s : %d개 \t", inventoryText[i], inventoryCount[i]);
	}
	printf("\n");
}

// const 포인터 왜 같이 쓰는지?
// 함수에서 어떻게 사용해야 하는가"
	

// 실습 예제2
// 플레이어의 소유한 인벤토리를 변경시키는 함수를 만들어보세요

void AddInventory(int inventoryCount[], int index, int amount)
{
	// 몇번째 요소를 얼마만큼 증가시킬 것인가?

	inventoryCount[index] += amount;
}

//void BattleEnd(플레이어의 인벤토리 주소, 0, 200)
//{
//	AddInventory(플레이어의 인벤토리 주소, 몇번째를, 얼마만큼);
//}