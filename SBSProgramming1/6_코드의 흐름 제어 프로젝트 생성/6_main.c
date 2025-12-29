// 가위 바위 보
// 실습 목표 : 다른 미니 게임 직접 설계하고 코드를 작성해보는 것

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("가위 바위 보 게임!\n");

	int playerChoice;
	int computerChoice;
	int playerScore = 0;
	int computerScore = 0;
	const char* rcp[] = { "가위", "바위", "보" }; // 배열 선언으로 숫자를 문자로 변환
	srand(time(NULL)); // 난수 생성기 초기화

	while (playerScore < 5 && computerScore < 5) // 승리 로직
	{
			printf("가위(1), 바위(2), 보(3) 해당하는숫자를 입력해주세요. \n");

			scanf("%d", &playerChoice);

			if (playerChoice < 1 || playerChoice > 3)
			{
				printf("잘못된 입력입니다. 1~3 사이의 숫자를 입력해주세요.\n");
				continue;
			}

			computerChoice = rand() % 3 + 1; // 1부터 3까지의 난수 생성

			if (playerChoice == computerChoice)
			{
				printf("비겼습니다\n");
			}
			else if ((playerChoice == 1 && computerChoice == 3) ||
				(playerChoice == 2 && computerChoice == 1) ||
				(playerChoice == 3 && computerChoice == 2))
			{
				printf("플레이어의 승리입니다.\n");
				playerScore++;
			}
			else
			{
				printf("플레이어의 패배입니다.\n");
				computerScore++;
			}

			// 플레이어의 선택 : 가위, 컴퓨터의 선택 : ? 출력
			printf("플레이어의 선택은 %s, 컴퓨터의 선택은 %s\n", 
				rcp[playerChoice-1], rcp[computerChoice-1]);

			// 플레이어의 점수 vs 컴퓨터의 점수 출력
			printf("플레이어의 점수 : %d vs 컴퓨터의 점수 : %d\n\n", playerScore, computerScore);
			
	}
			if (playerScore > computerScore)
			{
				printf("--------최종 승리는 플레이어입니다!--------\n");
			}
			else
			{
				printf("--------최종 승리는 컴퓨터입니다!--------\n");
			}
}



/*
* 개발 이력을 작성해보세요. History
* 가위, 바위, 보 게임
* Version 1.0.0 : 가위 바위 보의 결과를 출력하는기능 구현
* Version 1.0.1 : 유저의 입력 기능 구현  +  입력받을 수 없는 숫자를 대입한 경우에 버그가 발생!
* Version 1.0.2 : 늘어지던 if코드를 한꺼번에 정리 + switch조건문으로 한눈에 알아보게 정리 +
*                 난수 생성기가 반복문 안에 있는 오류 수정
* Version 1.0.3 : 배열 생성으로 switch 조건문 제거로 코드 효율 증가 +  1 ~ 3 이외의 숫자를 입력했을 때를
*                 대비해서 만든 승리 로직을 scanf 밑에 if와 continue기능을 넣어 간소화'
* Version 1.0.4 : 1234123
*/
