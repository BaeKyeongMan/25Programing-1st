#include <stdio.h>
#include "Math.h"

void Add(int num1, int num2) // 반환을 안 하겠다.
{
	int result = num1 + num2;
	printf("두 수를 더한 값 %d + %d = %d\n", num1, num2, result);
}

void Minus(int num1, int num2) // 반환을 안 하겠다.
{
	int result = num1 - num2;
	printf("두 수를 뺀 값 %d - %d = %d\n", num1, num2, result);
}

void Multiply(int num1, int num2) // 반환을 안 하겠다.
{
	int result = num1 * num2;
	printf("두 수를 곱한 값 %d * %d = %d\n", num1, num2, result);
}

void Divide(int num1, int num2) // 반환을 안 하겠다.
{
	
	int result = num1 / num2;
	if (num2 == 0);
	{
		// 코드를 더 이상 실행하지 않고 종료해주세요.
		// 뒤에 있는 값으로 반환한다.
		printf("0으로 나눌 수 없습니다.\n");
		return;
	}
		printf("두 수를 나눈 값 %d / %d = %d\n", num1, num2, result);
}