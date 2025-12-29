#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Practice.h"

int main()
{
	printf("1. 포인터 복습 \n");

	// 포인터 변수를 선언해보세요. 정수형
	// 정수값의 주소를 저장해보세요, 주소연산자 사용
	// 포인터 변수로 부터 값을 가져와서 출력해보세요. 역참조 연산

	int num = 10;
	int* numPtr = &num; // 정수를 4바이트 주소를 저장하는 변수
	printf("포인터 변수의 역참조 값 : %d\n", *numPtr);

	// 주소에 대한 이해
	// 데이터를 저장을 한다.
	// 주소의 시작점을 기준으로 자료형에 정의된 범위만큼 정해진 방식으로 읽는다.

	// int* : 주소 ? 시작 주소. 4바이트를 읽어라.

	printf("numPtr의 값 : %p\n", numPtr);
	float num2 = 0.2;
	float* num2Ptr = &num2;

	numPtr = num2Ptr;
	printf("numPtr 현재 주소로 부터 읽은 값 : %d\n", *numPtr);

	printf("2.포인터와 배열\n");

	int numarr[5] = { 0, }; // 시작 주소로부터 4바이트를 읽겠다. 그것이 5개 있다. 

	printf("numarr의 시작 주소 : %p\n", numarr);
	printf("numarr의 바이트 크기 : %d\n", sizeof(numarr));

	numarr[1] = 1;
	*(numarr + 4) = 2; // lvalue가 수정할 수 있습니다 // 주소에 정수를 넣었기 때문에 역참조를 해서 오류를 해결 // 자기 타입에 사이즈를 sizeof만큼 더해준다
	// numarr이라는 배열에 4를 더하고 역참조를 하면 배열에 할당된 주소에서 4번째 공간을 보여준다. 그리고 그 값을 2라고 지정했기 때문에 2가 나온다.

	// numarr[n] 표현식은 *(numarr + n) 내용을 자동으로 처리해주고 있다.
	printf("num[1]의 값 : %d\n", numarr[1]);

	// 배열의 크기를 증가시키고 싶습니다. 새로운 주소를 만들어서 기존 주소를 이동시킨다.

	printf("3.배열과 상수 포인터\n");

	// 배열은 포인터다. 주소가 바뀌면 안된다.  
	
	const char* const itemText[3] = {"나무", "바위", "칼"}; // 주소에 저장된 값을 상수로 지정하겠다.

	printf("itemText[0] : %s\n", itemText[0]);
	printf("itemText[1] : %s\n", itemText[1]);
	printf("itemText[2] : %s\n", itemText[2]);


	printf("포인터의 크기 : %d\n", sizeof(char*)); // 4바이트 -> 메모리 주소 4바이트 공간만 사용하겠다. 4바이트 운영체제에서 8바이트 게임 돌리면 안 돌아간다.

	// 배열은 기본적으로 상수 포이터 : 주소를 변경하지 못하는 포인터다.
	// 저장할 수 있는 자료형을 상수형으로 표현했다.

	SelectJob();
	Test2();
}
