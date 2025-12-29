#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findMaxMin(int* arr, int size, int* Max, int* Min);

int main()
{
	int star;
	int line;
	int num;
	int multiply;
	int gugudan;
	int sum = 0;
	int tap;

	//for (num = 2; num <= 20; num += 2)
	//{
	//	printf("%d\n", num);
	//}

	//
	//for (num = 0; num < 101; num++)
	//{
	//	sum = sum + num;
	//}
	//printf("%d\n", sum);


	//for (multiply = 1; multiply < 10; multiply++)
	//{
	//	num = multiply * 3;
	//	printf("3 * %d = %d\n", multiply, num);
	//}


	//scanf("%d", &gugudan);
	//for (multiply = 1; multiply < 10; multiply++)
	//{	

	//	num = multiply * gugudan;
	//	printf("%d * %d = %d\n", gugudan, multiply, num);
	//}
 
	//for (gugudan = 2; gugudan < 10; gugudan++)
	//{
	//	for (multiply = 1; multiply < 10; multiply++)
	//	{

	//		num = multiply * gugudan;
	//		printf("%d * %d = %d\n", gugudan, multiply, num);
	//	}
	//}


	//for (line = 0; line < 5; line++)
	//{
	//	for (star = 0; star < line + 1; star++)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//}


	//for (line = 0; line < 5; line++)
	//{
	//	for (star = 0; star <= line; star++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	//for (line = 0; line < 5 ; line++)
	//{
	//	for (star = 0; star < 5 - line; star++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	// 별 피라미드 만들기
	// 4개의 공백 후 별 찍고 다시 4개의 공백
	// 반복문으로 2개씩 더해가며 피라미드 완성

	for (line = 0; line < 5; line++)
	{
		for (star = 0; star < 5 - line; star++)
		{
			for (tap = 0; tap < 5 - star; tap++)
			{
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
	}

	int arr[5] = { 3, 7, 2, 9, 5 };
	int Max, Min;

	
	findMaxMin(arr, 5, &Max, &Min); // Max와 Min변수의 주소값

	printf("배열의 최대값 : %d\n", Max);
	printf("배열의 최소값 : %d\n", Min);

	return 0;
}

void findMaxMin(int* arr, int size, int* Max, int* Min) // arr이라는 주소에서, 정수로 된 4바이트짜리 사이즈를, Max, Min값을 주소에서 바꿔서 메인함수에 넘겨준다.
{
	int* arrPtr = arr; // arr은 배열 이름이라 상수 주소, 그래서 arr++같은 연산 불가능, 배열의 첫 번째 요소를 가리킴 arr[0]
	*Max = *arrPtr; // 배열의 첫 번째 값을 Max 변수에 초기값으로 넣는다. 여기서는 arr[0] = 3이기 때문에 현재 Max의 값은 3이다
	*Min = *arrPtr;
	for (int i = 0; i < 5; i++) 
	{
		if (*arrPtr > *Max)
		{
			*Max = *arrPtr;
		}
		if (*arrPtr < *Min)
		{
			*Min = *arrPtr;
		}
		arrPtr++;
	}

}