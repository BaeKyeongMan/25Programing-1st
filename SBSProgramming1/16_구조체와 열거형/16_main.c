#include "Sample.h"
#include <stdio.h>
/*
* 열거형
* - 상수 : 값을 고정시키겠다
* - const 변수 선언; 값을 바꾸는 것을 문법적으로 방지
* - #define PI 3.14
*/

// 열거형 : 0, 1, 2, 3....... 


#define MONSTERCOUNT 5

typedef enum
{
	ORC,
	HUMAN,
	UNDEAD,
	ANGEL,
	DEVIL,
	UNDEFINED = 100
}Race; // -> typedef를 사용하면 전역변수인 Race가 enum이라는 타입을 뜻함

typedef enum
{
	점수,
	동전,
	체력
}GameText;

 //#define 점수 = 0, 동전 = 1, 체력 = 2 사용하는 것이랑 enum정의하는 것의 차이점은 무엇일까요?

// 열거형 간결하게 사용하는 방법 typedef

// 조건문과 열거형을 같이 사용하는 패턴

int main()
{
	//enum GameText GameText = SCORE;

	// 상수는 값을 변경하지 못하게 하는 방법이다.
	const int count = 10; // 상수를 10으로 고정
	printf("몬스터의 수 : %d\n", MONSTERCOUNT);
	printf("몬스터의 수 : %d\n", count);
	

	const char* Text[3] = { "점수", "동전", "체력" };
	const char* RaceName[3] = { "ORC", "HUMAN", "UNDEAD" };
	printf("%s\n", Text[점수]); // 숫자를 어떠한 의미를 가지도록 약속을 했다.
	printf("%s\n", RaceName[ORC]);

	GameText newGameText = 점수;
	// 1을 입력을 하면 동전 어떻게 해라
	newGameText = 동전;
	/*if (newGameText == 점수)
	{
		printf("점수를 출력하는 예제입니다.\n");
	}
	else if (newGameText == 동전)
	{
		printf("동전을 출력하는 예제입니다.\n");
	}
	else if (newGameText == 체력)
	{
		printf("체력을 출력하는 예제입니다.\n");
	}*/

	Race race = ORC;

	switch (race) // 변수를 넣는다
	{
	    case ORC:
		    break;
		case HUMAN:
			break;
		default: race = UNDEFINED;
			break;
	}

	JOB myJOB = 정의되지않음;
	int baseHP = 0;
	int baseATK = 0;
	int* baseHPPtr = &baseHP;
	int* baseATKPtr = &baseATK;

	SelectJob(&myJOB); // 직업을 선택하는 함수
	SetPlayerStat(myJOB, baseHPPtr, baseATKPtr);
	// JOB에 따라서 기본적인 체력과 공격력이 다르다.
	// 직업에 따른 캐릭터 설정 (myJOB); // int hp int atk
}

// 심화과제
// 턴제 시스템을 열거형으로 표현을 어떻게 하면 좋을까?
// 플레이어턴 -> 플레이어 행동 -> 적의턴 -> 적 행동
// TURNSYSTEM 플레이어 턴?
// TURNSYSTEM 플레이어 행동
// TURNSYSTEM 적의 턴?
// TURNSYSTEM 적 행동