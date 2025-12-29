/*
*  날짜   : 2025-10-16
* 학습목표 : 자료형과 변수
* 실습목표 : 실제 게임을 분석해서 자료형을 이해한다.
*/

// 자료형 Data Type 
// Game Data : 숫자, 그림, 기호 정의되어 있지 않은 정보
// 컴퓨터에게 명령을 내리고 싶다.
// 더블킬(문자), 킬수 스코어 정보(정수), 스탯 정보(소수)
// 이미지 1920 x 1080, 소리(파장)

// 자료들의 특징에 따라서 형태를 분류를 했다. Type
// 자료형  : 문자, 정수, 실수

// 자료형을 이용하는 방법
// (어떤 타입) "이름" Variable 변수
// 함수를 사용하는 방법
// int 정수를 표현하는 타입
// float 실수
// char 문자 "H e l l o"
// string 문자열

#include <stdio.h>

int main()
{
	// 더블킬 게임 화면에 출력하고 싶다.
	printf("더블킬 \n");
	// 레드팀과 블루팀의 스코어를 출력하고 싶다.
	printf("10 vs 25 \n");
	// 챔피언이 가지고 있는 스탯을 출력하고 싶다.
	printf("AD : 10 \n");
	///////////////////////////////////////////
	
	//가렌의 레벨
    int level = 5;

	// 가렌의 체력
	int GarenFirstLevelHP = 690;
	float GarenGrowthHP = 98;
	
	// 가렌의 공격력
	int GarenFirstPower = 69;
	int GarenGrowPower = 4;

	// 가렌의 방어력
	int GarenFirstGuard = 38;
	int GarenGrowGuard = 4;

	// 가렌의 마법 저항력
	int GarenFirstMagicGuard = 32;
	int GarenGrowMagicGurad = 1;

	printf("가렌의 정보 \n");
	printf("체력        | %d (+%f) \n", GarenFirstLevelHP, GarenGrowthHP); // % = 문자 지정)
	printf("현재 체력   | %f \n", GarenFirstLevelHP + (level - 1) * GarenGrowthHP);
	printf("마나        | 0 \n");
	printf("공격력      | %d (+%d) \n", GarenFirstPower, GarenGrowPower);
	printf("방어력      | %d (+%d) \n", GarenFirstGuard, GarenGrowGuard);
	printf("마법 저항력 | %d (+%d) \n\n", GarenFirstMagicGuard, GarenGrowMagicGurad);

	// 이 정보를 컴퓨터가 내가 원하는 결과값으로 실행을 했나요?
	// 네.
	// (만족) vs (조금 더 해야한다)

	// 5레벨일 경우 가렌의 정보는 어떻게 되나요

	printf("가렌의 5레벨 정보 \n");
	printf("현재 체력        | %f \n", GarenFirstLevelHP + (level - 1) * GarenGrowthHP);
	printf("현재 마나        | 0 \n");
	printf("현재 공격력      | %d \n", GarenFirstPower + (level - 1) * GarenGrowPower);
	printf("현재 방어력      | %d \n", GarenFirstGuard + (level - 1) * GarenGrowGuard);
	printf("현재 마법 저항력 | %d \n\n", GarenFirstMagicGuard + (level - 1) * GarenGrowMagicGurad);

	// 다른 챔피언으로도 위의 방식으로 정보를 표현해보세요.

	// 레벨
	int Rakanlevel = 1;

	// 체력
	int RakanFirstHp = 610;
	int RakanGrowHp = 99;

	// 마나
	int RakanFirstMana = 315;
	int RakanGrowMana = 50;

    // 공격력
	int RakanFirstPower = 62;
	int RakanGrowPower = 3;

	// 방어력
	int RakanFirstGuard = 30;
	int RakanGrowGuard = 4;

	// 마법 저항력
	int RakanFirstMagicGuard = 32;
	int RakanGrowMagicGuard = 2;


	printf("라칸의 %d레벨 능력치\n", Rakanlevel);
	printf("현재 체력       | %d\n", RakanFirstHp + (Rakanlevel - 1 ) * RakanGrowHp);
	printf("현재 마나       | %d\n", RakanFirstMana + (Rakanlevel - 1 ) * RakanGrowMana);
	printf("현재 공격력     | %d\n", RakanFirstPower + (Rakanlevel -1 ) * RakanGrowPower);
	printf("현재 방어력     | %d\n", RakanFirstGuard + (Rakanlevel -1 ) * RakanGrowGuard);
	printf("현재 마법 저항력| %d\n", RakanFirstMagicGuard + (Rakanlevel -1 ) * RakanGrowMagicGuard);



	// 분석해보고 싶은 게임의 정보를 하나 가져옵니다. : 아이작
	// 체력을 숫자표현이 아닌 이미지로 표현하고 소수로 표현, (돈, 폭탄, 열쇠)는 정수로 표현
	// 능력치는 실수로 표현되어 있고 추가%는 곱연산인지 합연산인지 
	// 수식 표현
}