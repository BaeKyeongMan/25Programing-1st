
// 이름에 이유가 있다 Function
// 함수가 무엇일까? 처리 절차를 거치면 어떤 결과값이 반환되는 기능
// 함수를 왜 쓸까? 어떤 두 수를 더했는지 겨로가값에 출력할 수 있도록 수정해줘.


// 반환값 함수 이름 (매개 변수); Head << 
// { body 본문 }                   <<

// 메인 함수.
// 프로그램을 시작과 끝을 표현하는 기능을 하고 있다.

//함수를 먼저 생성하고 생성한 함수를 사용
// 반환타입 + 함수이름 (매개 변수); - 작업을 통해서만 함수가 생성된다.

// 함수를 표현하는 방식에는 4가지 유형
// 반환값 x 인자값 x
// 반환값 o 인자값 x
// 반환값 x 인자값 o
// 반환값 x 인자값 x
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "Math.h"
void SelectCharacter(int startPoint);

// minus
// multiply
// divide

int main()
{
	int num1 = 1;
	int num2 = 2;

	Add(num1, num2); // statement (명령'문') Add함수에 num1, num2를 인자로서 실행하라.
	Add(3, 5);       // Add함수를 3 -> num1, 5 -> num2 Add함수를 실행하라

	// scanf 입력받은 값을 사칙연산으로 처리하는 코드 만들 수 있다.
	Minus(3, 5);


	Multiply(1, 2);
	Divide(12, 4);

	// 플레이어가 낸 가위 바위 보에 해당하는 숫자를 출력하고 싶다.
	int playerChoice = SelcetPlayerBehavior(); // 1가위, 2바위, 3보
	printf("플레이어의 선택값 : %d \n", playerChoice);
	// 캐릭터의 초기 스탯 설정
	SelectCharacter(10);

	// 함수 안에서는 코드가 잘 실행이 된거 같은데 main 다른 코드는 영향을 끼치지 않는다.

	return 0; // 게임에서 종료기능 만들고 싶을 때, 어떤 숫자를 입력하면 프로그램을 종료하겠다.
}

// 캐릭터를 선택해서 스탯을 분배한다던가 하는 함수
// Dice_ STR, DEX, INT, LUK 분배
/*
* 반환값이 void 함수를 왜 사용할까?
* 반환값이 없더라도 코드를 수정할 수 있는가? - 주소의 개념을 이해                          -Value vs -Reference
* 함수 안에서만 코드가 실행이 되고 실제로는 변경이 안되는 기능이 필요하다 (ex) UI 다음 레벨을 보여주는 기능이 실제로 장비의 성능을 변경시키면?
*/

// 스탯 포인트를 분배해서 STR, DEX, INT, LUK 잘 출력이 되도록 만들어보세요.
// startPoint보다 넘는 값을 실행해서는 안됩니다.
// 분배한 스탯이 main에서도 사용될려면 어떻게 해야할까? <고민>

/*
* 1. 스탯을 어디에 분배할지 정한다.
* 2. 분배할 스탯 포인트를 정한다.
* 3. 분배한 스탯의 증가를 표현한다.
* 4. 남은 스탯 포인트를 출력한다.
* 5. 2~4를 반복한다.
* 6. 남은 스탯 포인트가 0이 될 때까지 반복한다.
* 7. 스탯 포인트가 마니너스가 되지않게 한다.
* 7-1. 마이너스가 될 경우 실행을 취소하고 다시 분배하게 한다.
*/
void SelectCharacter(int startPoint)
{
	printf("스탯 포인트를 분배해주세요 : %d\n", startPoint);
	printf("STR : 1 DEX : 2 INT : 3 LUK : 4\n");
	int selectNumber = 0;
	int remainPoint = startPoint;
	int spendPoint;
	int STR = 0;
	int DEX = 0;
	int INT = 0;
	int LUK = 0;
	
	// remainPoint가 0과 같아질 때까지

	for (remainPoint = startPoint; remainPoint > 0;)
	{
		scanf("%d", &selectNumber);
		if (selectNumber > 4)
		{
			printf("1 ~ 4 중에 하나를 선택해주세요\n");
			continue;
		}
		else if (selectNumber == 0)
		{
			printf("1 ~ 4 중에 하나를 선택해주세요\n");
			continue;
		}

		scanf("%d", &spendPoint);
		if (selectNumber == 1)
		{
				remainPoint = remainPoint - spendPoint;
				STR = STR + spendPoint;
				printf("남은 스탯 포인트 : %d\n", remainPoint);
				printf("STD : %d DEX : %d INT : %d LUK : %d\n", STR, DEX, INT, LUK);

	
		}
		else if (selectNumber == 2)
		{
			remainPoint = remainPoint - spendPoint;
			DEX = DEX + spendPoint;
			printf("남은 스탯 포인트 : %d\n", remainPoint);
			printf("STD : %d DEX : %d INT : %d LUK : %d\n", STR, DEX, INT, LUK);	
			

		}
		else if (selectNumber == 3)
		{
			remainPoint = remainPoint - spendPoint;
			INT = INT + spendPoint;
			printf("남은 스탯 포인트 : %d\n", remainPoint);
			printf("STD : %d DEX : %d INT : %d LUK : %d\n", STR, DEX, INT, LUK);


		}
	    else if (selectNumber == 4)
		{
			remainPoint = remainPoint - spendPoint;
			LUK = LUK + spendPoint;
			printf("남은 스탯 포인트 : %d\n", remainPoint);
			printf("STD : %d DEX : %d INT : %d LUK : %d\n", STR, DEX, INT, LUK);

	
		}	     
		if (remainPoint < spendPoint)
		{
			remainPoint = remainPoint + spendPoint;
			if (selectNumber == 1)
			{
				STR = STR - spendPoint;
			}
			else if (selectNumber == 2)
			{
				DEX = DEX - spendPoint;
			}
			else if (selectNumber == 3)
			{
				INT = INT - spendPoint;
			}
			else if (selectNumber == 4)
			{
				LUK = LUK - spendPoint;
			}
			printf("스탯 포인트를 초과하였습니다. 다시 분배해주세요\n");
		}
	}
	
	printf("\n스탯 포인트 분배가 완료되었습니다.\n");
	return;
	

	// remianPoint < spendPoint일 경우를 어떻게 탈출할 것인가?
	// 어떤 타이밍에 return을 하고 아래 코드를 실행할 것인가? 조건문으로 표현을 하세요.
}
/*
* 스탯 분배의 순서
* STR에 포인트 분배 후 남은 스탯 포인트 출력
* 분배 후 스탯 출력
* DEX에 포인트 분배 후 남은 스탯 포인트 출력
* 분배 후 스탯 출력
* etc
*/

int SelcetPlayerBehavior()
{
	int num = 0;
	scanf("%d", &num);

	if(num == 1)
	return 1; // 가위
	else if (num == 2)
	return 2; // 바위
	else if (num == 3)
	return 3; // 보
}
