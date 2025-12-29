#define WIDTH 40 // 맵의 크기
#define HEIGHT 20

void KeyboardMove()
{
    int x = WIDTH / 2;
    int y = HEIGHT / 2;
    char input;

    while (1) {
        // 콘솔 화면 초기화
        system("cls");

        // 화면 출력
        for (int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if (i == y && j == x)
                    printf("배"); // 캐릭터 위치
                else
                    printf(" "); // 맵을 표현하는 문자
            }
            printf("\n");
        }

        // 입력 받기
        input = _getch();


        // 이동 처리
        if (input == 'w' && y > 0) y--;
        else if (input == 's' && y < HEIGHT - 1) y++;
        else if (input == 'a' && x > 0) x--;
        else if (input == 'd' && x < WIDTH - 1) x++;
        else if (input == 'q') break; // q 누르면 종료
    }
}