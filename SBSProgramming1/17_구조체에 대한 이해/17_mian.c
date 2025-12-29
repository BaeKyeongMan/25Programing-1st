
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 컴퓨터에게 명령을 내리기 위해서다.
// 숫자만 읽을 수 있다. 
// 자료형 변수. 정수(1, 2, 4), 실수(4, 8)
// 메모리 안에 저장이 되어있다. 시작 주소를 알려주는 문법. 포인터

// 플레이어의 좌표 : int 자료형 2개 저장할 수 있게 만들고 싶다

typedef struct {
	int x;
	int y;
}PlayerPos; // 플레이어의 좌표

typedef struct BattleEntity {
	int hp;
	int ad;
	int ap;
	int p_def;
	int m_def;
}BattleEntity; // 전투에 필요한 플레이어와 적의 스탯

typedef struct {
	PlayerPos pos;
	BattleEntity battleEntity;

}Player; // 플레이어의 전투 요소

typedef struct {
	int coin;
	int head;
	int leather;
}EnemyReward; // 적을 죽였을 때 보상

// 포인터의 크기 : 8바이트 원본의 크기에 상관없이

// Enemy 구조체를 직접 선언해보세요. Enemy 죽었을 때 주는 보상 Reward
// Enemy 전투요소

void PrintfPos(PlayerPos player);

int main()
{
	// 배열 : 같은 타입의 자료형을 배열을 사용해서 표현할 수 있다.
	// 주소 한개로 어떻게 1 ~ n?>
	// 배열을 포인터로 어떻게 설명할 수 있을까? 표현할 수 있을까? (상수 포인터)

	// 구조체. 자료형 선언. 포인터. 배열.

	// 구조체 what? why? 
	// 사용자 정의 자료형  유저가 직접 정의하겠다. User Defined Type -> typedef
	// x좌표 y좌표

	printf("구조체 사용 이유\n");
	int x = 0;
	int y = 0;
	
	PlayerPos p1 = { 2, 4 }; // 처음 데이터를 넣는 것을 초기화라고 한다.
	PrintfPos(p1);
	
	Player player;
	PlayerPos startPos = { 0,0 };
	player.pos = startPos;
	BattleEntity battleEntity = { 1,2,3,4,5 };
	player.battleEntity = battleEntity;

	printf("플레이어의 전투 요소 : %d, %d, %d, %d, %d\n", player.battleEntity.hp, player.battleEntity.ad, 
		player.battleEntity.ap, player.battleEntity.p_def, player.battleEntity.m_def);

	// 플레이어, enemy

	EnemyReward enemyReward = { 100, 1, 2 };
	printf("적을 죽였을 때의 보상 : coin = %d head = %d leather = %d\n", enemyReward.coin, enemyReward.head, enemyReward.leather);

	printf("구조체 포인터 사용 이유\n");

	printf("구조체의 크기 : %d\n", sizeof(Player*));

	// 기능을 확장하기 위해서 player에 구조체를 계속 추가한다. 예르 들어서 economy, battel,...craft...
}

//void Battle(Player player, Enemy enemy)
//{
//
//}

void PrintfPos(PlayerPos player) 
{
	printf("플레이어의 현재 위치 : [%d, %d]\n", player.x, player.y);
}