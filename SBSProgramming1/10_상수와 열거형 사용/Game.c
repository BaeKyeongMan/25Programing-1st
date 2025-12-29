#include "Game.h"

bool CheckPlayerIsBoundary()
{
	int mapX = CalculateBoundaryX(0);
	int mapY = CalculateBoundaryY(0);
	int playerX = 3;
	int playerY = 5;

	if((playerX >= 0 && playerX < mapX) && (playerY >= 0 && playerY < mapY)) // 어떤 조건일 때 참인가? MAPSIZE X,Y player X Y 비교 
	{
		printf("플레이어가 경계선 안에 있습니다.\n");
		return true;
	}
	else
	{
		printf("플레이어가 경계선 밖에 있습니다.\n");
		return false;
	}
}

int CalculateBoundaryX(int MapOriginX)
{	
	return MapOriginX + MAPSIZE;
}

int CalculateBoundaryY(int MapOriginY)
{
	return MapOriginY + MAPSIZE;;
}