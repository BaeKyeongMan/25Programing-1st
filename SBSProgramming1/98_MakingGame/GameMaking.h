#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef enum
{
	전사,
	광전사,
	성전사,
	UNDEFINED = 100
}JOB;

void SelectJob(JOB* myJobPtr);
void myJobStat(JOB myJobPtr, int* speedPtr, int* hpPtr, int* atkPtr);
void STAGE();