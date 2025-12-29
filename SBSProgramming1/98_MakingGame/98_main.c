#include "GameMaking.h"


// 1. 직업을 선택한다
// 1-1. 직업을 선택했을 때 스탯을 보여준다
// 2. 맵을 형성한다.
// 2-1. 플레이어, 몬스터 등등을 생성한다.
// 3. 


int main()
{
	JOB myJob = UNDEFINED;
	int jobSpeed = 0;
	int jobHp = 0;
	int jobAtk = 0;
	int* jobSpeedPtr = &jobSpeed;
	int* jobHpPtr = &jobHp;
	int* jobAtkPtr = &jobAtk;

	SelectJob(&myJob);
	myJobStat(myJob, jobSpeedPtr, jobHpPtr, jobAtkPtr);

	
}