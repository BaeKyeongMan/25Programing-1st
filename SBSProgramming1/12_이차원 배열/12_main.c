#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

/*
* 배열의 활용
* 2차원 배열
* 게임에서 적용
*/

// 플레이어 조작
// 

// 플레이어  : !
const char PLAYER = '!'; // 문자의 크기가 1인 기호만 대체 가능
// 몬스터   : @
const char MONSTER = '@';
// 돈	   : $
const char MONEY = '$';
// 벽       : #
const char WALL = '#';
#define MAPSIZE 20

// const int MAPSIZE = 10;  // 배열을 표현하지 못함
// STAGE별로 나눌려면 어떻게 처리해야 할까? -> 준비되어 있는 좌표들이 있다. 시작할 때 세팅. 출력하라

// 플레이어의 이동을 구현하는 코드 AI 구현해보세요. C언어 windows.h 사용해서
void PlayerMove(int* playerX, int* playerY);

int main()
{
	// Text로 출력을 해야한다. -> 문자로 이루어져있는 배열
	char input;
	int mapX;
	int mapY;
	int monsterX = 8;
	int monsterY = 8;
	int playerX = 5;
	int playerY = 5;
	int *playerPtrX = &playerX;
	int *playerPtrY = &playerY;
	// 10개의 char를 저장할 수 있는데 첫번째 데이터는 !로 저장하겠다.
	char STAGE[MAPSIZE][MAPSIZE * 2] =
	{
	  ""
	};


	// 이중 반복문을 사용하여 맵을 세팅한다.
	for (int y = 0; y < MAPSIZE; y++)
	{
		for (int x = 0; x < MAPSIZE * 2; x++)
		{
			if (y == 0 || y == MAPSIZE - 1) // or 조건으로 표현하면 좋겠다.
			{
				if(x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else
				{
					STAGE[y][x] = WALL;
				}
			}
			else
			{
				if (x == MAPSIZE * 2 - 1)
				{
					STAGE[y][x] = '\0';
				}
				else if (x == 0 || x == MAPSIZE * 2 - 2)
				{
					STAGE[y][x] = WALL;
				}
				else
				{
					STAGE[y][x] = ' ';
				}
			}
		}
		

	}

	// 게임 로직, 5Frame 후에 몬스터가 x방향으로 1 움직였다. x+1

	//Initialize();
	//Setup();

	//while (1)
	//{
	//	// 게임이 실행되는 순서의 로직을 작성해야 한다.
	//	// 초기화 : 데이터가 없으면 기본 값으로 설정하고, 초기 값으로 설정한다.
	//	// 데이터가 변동 (게임 루프) Update();
	//	Update();
	//	Render(); // 화면에 그려주세요.
	//	Buffer(); // 포인터의 개념을 배워야 합니다.
	//}
	

	// (3,5)에서 플레이어가 생성된다.
	STAGE[3][5] = PLAYER;
	// (5,7) 돈이 생성된다.
	STAGE[5][7] = MONEY;
	// (8,8) 몬스터가 생성된다.
	monsterX -= 6;
	STAGE[monsterX][monsterY] = MONSTER;

	PlayerMove(&playerX, &playerY);
	// 세팅된 맵을 화면에 보이게 하라
	for(int h = 0; h < MAPSIZE; h++)
	{
		printf("%s\n", STAGE[h]);
	}

	// 첫번째열은 다 #으로 채우기

	printf("\n[WASD]로 이동, [Q]로 종료\n> ");
	

}


void PlayerMove(int *playerX, int *playerY)
{
	// windows.h kbhit() 사용해서 입력 받기
	// 입력받은 코드를 PlayerMove() -> main함수에서 값이 변경되는 것을 받도록 만들어라.
	// 조건문만 만들어 주면 언제 x의 값이 바뀔지
	char input;
	scanf("%c", &input); // 입력 받기 (앞의 공백은 이전 입력의 개행 제거용)

	if (input == 'w' || input == 'W') (*playerY) -= 1;
	else if (input == 's' || input == 'S') (*playerY) += 1;
	else if (input == 'a' || input == 'A') (*playerX) -= 1;
	else if (input == 'd' || input == 'D') (*playerX) += 1;
	// scanf
	// 'w' Y-1 
	// 's' Y+1
	// 'a' X-1
	// 'd' X+1
}