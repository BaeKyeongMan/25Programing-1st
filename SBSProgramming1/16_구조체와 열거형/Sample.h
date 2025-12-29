#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#ifndef JOB_H

#define JOB_H

typedef enum
{
	전사,
	도적,
	마법사,
	궁수,
	정의되지않음 = 100
}JOB;

#endif // !1

void SelectJob(JOB* myJOBPtr);

void SetPlayerStat(JOB selectJob, int* hpPtr, int* atkPtr);