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
	const char* playerCharacter = "가위";
	const char* computerCharacter = "보";
	int loopCount = 5;
	int Count = 0;

	while (Count < loopCount)
	{
			printf("가위(1), 바위(2), 보(3) 해당하는숫자를 입력해주세요. \n");
			scanf("%d", &playerChoice);

			srand(time(NULL)); // 난수 생성기 초기화
			computerChoice = rand() % 3 + 1; // 1부터 3까지의 난수 생성


			if (playerChoice == 1 && computerChoice == 3)
			{
				playerScore = playerScore + 1;
				printf("유저가 승리했습니다\n");
			}

			else if (playerChoice == 1 && computerChoice == 1)
			{
				printf("유저가 비겼습니다\n");
			}


			else if (playerChoice == 1 && computerChoice == 2)
			{
				computerScore = computerScore + 1;
				printf("유저가 패배했습니다\n");
			}
			else
			{
				if (computerChoice <= 0 && computerChoice > 3)
					printf("예상하지 못한 결과가 발생했습니다.\n");
			}

			if (playerChoice == 2 && computerChoice == 1)
			{
				playerScore = playerScore + 1;
				printf("유저가 승리했습니다\n");
			}

			else if (playerChoice == 2 && computerChoice == 2)
			{
				printf("유저가 비겼습니다\n");
			}


			else if (playerChoice == 2 && computerChoice == 3)
			{
				computerScore = computerScore + 1;
				printf("유저가 패배했습니다\n");
			}
			else
			{
				if (computerChoice <= 0 && computerChoice > 3)
					printf("예상하지 못한 결과가 발생했습니다.\n");
			}

			if (playerChoice == 3 && computerChoice == 2)
			{
				playerScore = playerScore + 1;
				printf("유저가 승리했습니다\n");
			}

			else if (playerChoice == 3 && computerChoice == 3)
			{
				printf("유저가 비겼습니다\n");
			}


			else if (playerChoice == 3 && computerChoice == 1)
			{
				computerScore = computerScore + 1;
				printf("유저가 패배했습니다\n");
			}
			else
			{
				if (computerChoice <= 0 && computerChoice > 3)
					printf("예상하지 못한 결과가 발생했습니다.\n");
			}

			if (playerChoice == 1)
			{
				playerCharacter = "가위";
			}
			else if (playerChoice == 2)
			{
				playerCharacter = "바위";
			}
			else if (playerChoice == 3)
			{
				playerCharacter = "보";
			}


			if (computerChoice == 1)
			{
				computerCharacter = "가위";
			}
			else if (computerChoice == 2)
			{
				computerCharacter = "바위";
			}
			else if (computerChoice == 3)
			{
				computerCharacter = "보";
			}

			if (playerChoice == 3 && computerChoice == 3)
			{
				loopCount = loopCount + 1;
			}
			else if (playerChoice == 2 && computerChoice == 2)
			{
				loopCount = loopCount + 1;
			}
			else if (playerChoice == 1 && computerChoice == 1)
			{
				loopCount = loopCount + 1;
			}
			// 플레이어의 선택 : 가위, 컴퓨터의 선택 : ? 출력
			printf("플레이어의 선택은 %s, 컴퓨터의 선택은 %s\n", playerCharacter, computerCharacter);

			// 플레이어의 점수 vs 컴퓨터의 점수 출력
			printf("플레이어의 점수 : %d vs 컴퓨터의 점수 : %d\n", playerScore, computerScore);

			Count++;
			
			if (Count >= loopCount)
				break;
	}
}