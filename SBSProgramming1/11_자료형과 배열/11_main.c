#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// 어떤 점이 장점이 되는가?
// 기존 방식, 새로운 방식 둘 다 사용.
// obsolte : 더 이상 쓸모가 없어져서 지원을 안 하겠다
// 이 코드를 사용하면 경고가 뜨면, 이거 이제 지원 안 해줄거야. 새로운 문법 써

// 반복문. 

// 중괄호는 영역을 표현하는 녀석
// 함수 헤더() => {  }
// 자료형 int x 100개 {  } 중괄호로 표현

int main()
{
	// 반복적으로 사용되는 자료형을 배열로 표현한다. 코드를 개선하기 위함.
	// 배열 사용(1)
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	int numArray[] = { 0,1,2,3 };
	printf("값 : %d\n", numArray[0]); // 첫번째 표현인데 왜 1이 아니고 0일까?
	printf("4번째 값 : %d\n", numArray[3]);



	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 값 : %d\n", i, numArray[i]);
	}
	// 배열 사열(2)

	int numArray2[100]; // int형 자료형이 100개 저장될 수 있는 공간을 선언한다. int형 배열의 크기가 100인 녀석이다.
	int numArray3[40] = { 0,1,2,3 };
	// sizeof(변수의 이름) -> 바이트의 크기를 반환해준다.

	printf("a의 크기 : %lluBYTE\n", sizeof(a));
	printf("numArray의 수 : %llu개\n", sizeof(numArray) / sizeof(int));   //자료형의 수를 표현             
	printf("numArray의 크기 : %lluBYTE\n", sizeof(numArray));             //16 a = 4바이트고 그게 4개니까 16바이트
	printf("numArray2의 크기 : %lluBYTE\n", sizeof(numArray2));           //400 
	printf("numArray2[99]의 크기 : %lluBYTE\n", sizeof(numArray[99]));    // 무슨 값을 넣어도 4바이트 입력한 값만 바이트 표현하는 건가?
	printf("numArray3의 크기 : %lluBYTE\n", sizeof(numArray3));           // 160

	// 배열을 선언하는 방법
	// 자료형 이름[] = {};
	// 자료형 이름[숫자];
	// 자료형 이름[숫자] = {}; 갯수가 안맞는 경우

	// 문자를 직접 표현
	// 플레이이어의 이름 : 설정
	// 플레이어 이름을 저장할 수 있는 공간을 만들고 이 공간에 입력받은 데이터를 저장하고 싶다.

	// int a; scanf(&a);
	// char c; scanf(&c); //문자 기호 하나만 표현.
	printf("안녕하세요\n");
	//printf(1);

	char c1 = 'h';
	char c2 = 'i';
	printf("%c%c\n", c1, c2);

	char text[] = "안녕";  // 1바이트로 표현 못해서 2바이트로 표현


	printf("Text의 크기 : %llu\n", sizeof(text));  // 결과값 = 5

	// " "; -> literal 문자 ('') ('') -> '\0' (널문자) -> 문자열의 끝을 표현하는 특수문자
	// 왜 문자의 끝을 표현을 해줘야 하는가? <- 문자열의 길이를 알 수가 없기 때문에

	// 반복문을 사용해서 문자가 끝이 났는 지확인하는 코드를 작성해봅시다.

	char str[50];
	int index = 0;
	printf("문자열을 입력 : ");
	scanf("%s", str); // 왜 str은 주소 연산자를 안 쓰나요?

	while (str[index] != '\0')  // str 들어있는 문자를 모두 출력하세요
	{
		printf("%c", str[index]);
		index++;
	}

	// char ar1[] = {'H', 'I'} => 문자의 배열
	// char ar2[] = {'H', 'I', '\0'}; => 문자열
	// NPC대화를 하는데 NPC 첫번째 대화를 했을 때 할 말 dialouge -> '안''녕''하'

	// 문자의 입력을 받아서 비교를 한다.
	// 리터럴문자 저장되는 영역 따로 존재한다.
	char name[10];

	printf("\n리터럴문자의 주소%x\n", "안녕하세요");

	scanf("%s", name); // &name X 주소의 주소가 되어버림
	
	if (name == "가위")
	{
		printf("같다\n");
	}
	else
	{
		printf("다르다\n");
	}

	// name "리터럴문자" 주소가 다르다. 저장되는 영역이 다르기 때문.
	// 문자열의 비교 함수로 만들어본다. 실행할 수 있게 본다.

	// name 가위 들어있는 내용은 같다. '가' '위' '\0' => 같다 알려주는 함수 bool IsStrCompare

	if (strcmp(name, "가위") > 0)
	{

	}
	else if (strcmp(name, "가위") == 0)
	{

	}
	else if(strcmp(name, "가위") < 0)
	{
	
	}
}