#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
const static int MAPSIZE = 10;




bool CheckPlayerIsBoundary();
int CalculateBoundaryX(int MapOriginX);
int CalculateBoundaryY(int MapOriginY);

