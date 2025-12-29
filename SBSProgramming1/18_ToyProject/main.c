// 포인터 공부 어떻게 하면 되나요?
// 1. 정의 -> 무엇인가? 왜 써야하는가?
// 2. & , int*,  *변수이름    각 연산자가 어떻게 쓰는가? 
// 3. 포인터와 배열의 관계
// 4. 포인터를 매개변수로 사용하는 함수를 만들어보세요.

// 배열구현까지 완료가 되셨다면. 같은 몬스터 N개 구현이 가능해졌다. -> 별피하기
// 별이 떨어지는데, 별마다 특징을 다르게 하고 싶다 -> 객체마다 다른 특징을 보유하게 하고 싶다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>
#include <Windows.h>
#include "Screen.h"


void GoToXY(int x, int y)
{
	COORD coord = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
typedef struct 
{
	int x;
	int y;
}PlayerPos;

PlayerPos ePos = { 5, 5 }; // 구조체의 이름은 COORD 공용적인 이름을 바꾸면 좋다.
PlayerPos ePos2 = { 3, 8 };

void Render(PlayerPos playerPos)
{
	//system("cls");
	//GoToXY(playerPos.x, playerPos.y);
	ScreenPrint(playerPos.x, playerPos.y, "@");
	ScreenPrint(ePos.x, ePos.y, "#");
	ScreenPrint(ePos2.x, ePos2.y, "%");
	ScreenFlipping();
	//printf("@");

	ScreenClear();
}

bool Quit()
{
	// 게임이 종료될 조건을 Bool 반환하는 함수로 만들어서
	int input = 0;
	//scanf("%d", &input);
	if (input == 5)	 // 조건이 만족하면 종료하라.
	{
		return true;
	}
	else {
		return false;
	}
}


void PlayerControl(PlayerPos* pos)
{
	unsigned char input = 0;  // 화살표 225  

	if (_kbhit()) // 키보드를 입력하면 True
	{
		input = _getch();

		if (input == 224 || input == 0)
		{
			input = _getch(); // 두 번째 문자 읽기
			switch (input) {
			case 72: // ↑
				// 플레이어의 현재 좌표를 -1 해주세요
				(*pos).y -= 1;
				break;
			case 80: // ↓
				// 플레이어의 현재 좌표를 +1 해주세요
				(*pos).y += 1;

				if (pos->x >= MAPHEIGHT)
				{
					pos->x = MAPHEIGHT;
				}
				break;
			case 75: // ←
				// 플레이어의 현재 좌표를 x-1 해주세요
				(*pos).x -= 1;
				break;
			case 77: // →
				// 플레이어의 현재 좌표를 x+1 해주세요
				(*pos).x += 1;
				break;
			}
		}
	}
}
void Update()
{
	// 플레리어 이외에 이동하는 코드
	ePos.x++; // 화면 밖으로 이동하면 문제가 발생한다. 데이터 로직상으로 막아보세요. 조건문
	ePos2.y++;
	if (ePos.x >= 30)
	{
		ePos.x = 0;
	}
	if (ePos2.y >= 30)
	{
		ePos2.y = 0;
	}
	Sleep(70);
}

// Player좌표 구조체. x값과 y값을 수정할 수 있게 만들어보세요.

int main()
{
	ScreenInit();
	PlayerPos playerPos = { 0,0 };
	playerPos.x;
	playerPos.y;


	while (1) // 게임 루프
	{
		// 로직
		// 조작하는 함수 playerhandle playercontrol
		// Update (갱신하다)
		// 렌더 (데이터 변경되면 그 것을 실행하라)

		PlayerControl(&playerPos);
		Update();
		Render(playerPos);

		if (Quit())
		{
			break;
		}
	}
}

// 개발 노트

// 플레이어의 조작을 해서 화면에 움직이게 구현함 (데이터) - (화면 출력)
// 버그 -> 플레이어가 밖으로 나가면 무한반복이 됨, 잔상이 남는다.
// 해야할 일 -> 각 기능을 함수에 넣기
// system("cls") 화면을 없애도록 수정 -> 화면이 깜빡거리는 문제가 발생
// '화면버퍼' - 화면0 ->, 화면1  두 개를 만들어서 번갈아가면서 출력하는 방법