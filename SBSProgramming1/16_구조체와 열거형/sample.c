#include "Sample.h"

void SelectJob(JOB* myJOBPtr)
{
	int input = 0;

	printf("종족을 선택하세요 0 = 전사, 1 = 도적, 2 = 마법사, 3 = 궁수\n");
	scanf("%d", &input);

	*myJOBPtr = input;
	JOB tempJob = *myJOBPtr;

	if (tempJob == 전사)
	{
		printf("전사를 선택하셨습니다.\n");
	}
	else if (tempJob == 도적)
	{
		printf("도적를 선택하셨습니다.\n");
	}
	else if (tempJob == 마법사)
	{
		printf("마법사를 선택하셨습니다.\n");
	}
	else if (tempJob == 궁수)
	{
		printf("궁수를 선택하셨습니다.\n");
	}
	else
	{
		printf("잘못된 입력값입니다.\n");
		
	}
}

void SetPlayerStat(JOB selectJob, int* hpPtr, int* atkPtr)
{
	switch (selectJob)
	{
		case 전사:
			*hpPtr = 100;
			*atkPtr = 50;
			printf("전사의 스탯은 체력 : %d, 공격력 : %d 입니다.\n", *hpPtr, *atkPtr);
			break;

		case 도적:
			*hpPtr = 50;
			*atkPtr = 100;
			printf("도적의 스탯은 체력 : %d, 공격력 : %d 입니다.\n", *hpPtr, *atkPtr);
			break;

		case 마법사:
			*hpPtr = 30;
			*atkPtr = 120;
			printf("마법사의 스탯은 체력 : %d, 공격력 : %d 입니다.\n", *hpPtr, *atkPtr);
			break;

		case 궁수:
			*hpPtr = 10;
			*atkPtr = 140;
			printf("궁수의 스탯은 체력 : %d, 공격력 : %d 입니다.\n", *hpPtr, *atkPtr);
			break;
		default:
			printf("정의되지 않은 직업입니다.\n");
			break;
	}
}