#include "GameMaking.h"

void SelectJob(JOB* myJobPtr)
{
	int input = 0;
	printf("직업을 선택하세요. 0 = 전사, 1 = 광전사, 2 = 성전사\n");
	scanf("%d", &input);
	*myJobPtr = input;
	JOB SelectJob = *myJobPtr;

	switch (SelectJob)
	{
		case 전사:
		printf("전사를 선택하셨습니다\n");
			break;

		case 광전사:
		printf("광전사를 선택하셨습니다\n");
			break;

		case 성전사:
		printf("성전사를 선택하셨습니다\n");
			break;

		default:
		printf("선택하실 수 없는 직업입니다\n");
			break;
	}
}

void myJobStat(JOB SelectJob, int* speedPtr, int* hpPtr, int* atkPtr)
{
	switch (SelectJob)
	{
		case 전사:
			*speedPtr = 3;
			*hpPtr = 10;
			*atkPtr = 5;
			printf("전사의 스탯은 체력 : %d, 스피드 : %d, 공격력 %d입니다.\n", *speedPtr, *hpPtr, *atkPtr);
			break;
		case 광전사:
			*speedPtr = 5;
			*hpPtr = 6;
			*atkPtr = 8;
			printf("광전사의 스탯은 체력 : %d, 스피드 : %d, 공격력 %d입니다.\n", *speedPtr, *hpPtr, *atkPtr);
			break;
		case 성전사:
			*speedPtr = 2;
			*hpPtr = 15;
			*atkPtr = 4;
			printf("성전사의 스탯은 체력 : %d, 스피드 : %d, 공격력 %d입니다.\n", *speedPtr, *hpPtr, *atkPtr);
			break;
		default:
			printf("정의되지 않은 직업입니다\n");
			break;
	}
}