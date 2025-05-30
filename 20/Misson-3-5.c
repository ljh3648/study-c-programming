#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetUserChoice(void);
int GetAiChoice(void);
int RunGame(int userValue, int aiValue);

int main(void) {
    int userWinScore = 0;
    int userDrawScore = 0;

    for (int i = 0; i < 3; i++) {
        int userValue = GetUserChoice();
        int aiValue = GetAiChoice();
        int gameResult = RunGame(userValue, aiValue);
        if (gameResult == 1) userWinScore++;
        else if (gameResult == 2) userDrawScore++;
    }

    printf("게임의 결과: %d승, %d무\n", userWinScore, userDrawScore);

    return 0;
}

int GetUserChoice(void) {
    int input = 0;
    while (1) {
        printf("바위는 1, 가위는 2, 보는 3\n");
        scanf("%d", &input);
        if (!(0 < input && input <= 3)) {
            printf("잘못된 입력!! \n");
        }
        else return input;
    }
}

int GetAiChoice(void) {
    srand((int)time(NULL));
    int aiValue = (rand() % 3) + 1;
    return aiValue;
}

int RunGame(int userValue, int aiValue) {
    char* ptr[3] = { "바위", "가위", "보" };

    if ((userValue % 3) + 1 == aiValue) {
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다! \n\n", ptr[userValue - 1], ptr[aiValue - 1]);
        return 1;
    }
    else if ((aiValue % 3) + 1 == userValue) {
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다. \n\n", ptr[userValue - 1], ptr[aiValue - 1]);
        return 0;
    }
    else {
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다. \n\n", ptr[userValue - 1], ptr[aiValue - 1]);
        return 2;
    }
}
