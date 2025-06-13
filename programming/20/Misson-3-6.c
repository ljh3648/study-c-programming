#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetPlayerChoice(int *, int);
void GetAiChoice(int *, int);
void GameVerdict(int *, int *, int *, int *, int);
int GameRsultPrint(int, int, int);

int main(void) {
    int player_choice[3] = { 0 };
    int ai_choice[3] = { 0 };
    int game_cnt = 0, strike = 0, ball = 0;
    int out_flag = 0;

    while (!out_flag) {
        game_cnt++;
        GetPlayerChoice(&player_choice[0], sizeof(player_choice) / sizeof(int));
        GetAiChoice(&ai_choice[0], sizeof(ai_choice) / sizeof(int));
        GameVerdict(&player_choice[0], &ai_choice[0], &strike, &ball, sizeof(ai_choice) / sizeof(int));
        out_flag = GameRsultPrint(game_cnt, strike, ball);
    }

    return 0;
}

/*
    플레이어에 입력에 대한 숫자 겹침의 검증 로직은 미구현.
*/
void GetPlayerChoice(int *player_choice_ptr, int size) {
    int value;

    for (int i = 0; i < size; i++) {
        scanf("%d", &value);
        *(player_choice_ptr + i) = value;
    }
}

void GetAiChoice(int *ai_choice_ptr, int size) {
    srand((int)time(NULL));

    int flag[10] = { 0 };
    for (int i = 0; i < size; i++) {
        int random_value = (rand() % 10);

        if (flag[random_value] != -1) {
            flag[random_value] = -1;
            *(ai_choice_ptr + i) = random_value;
        }
        else {
            i--;
        }
    }
}

void GameVerdict(int *player_choice, int *ai_choice, int *strike, int *ball, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(ai_choice + i));
    }

    for (int i = 0; i < size; i++) {
        if (*(player_choice + i) == *(ai_choice + i)) {
            *strike = *strike + 1;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) continue;

            if (*(player_choice + i) == *(ai_choice + j)) *ball = *ball + 1;
        }

    }
    printf("\n");
}

int GameRsultPrint(int game_cnt, int strike, int ball) {
    printf("%d번째 도전 결과 : %d strike, %d ball!!\n", game_cnt, strike, ball);
    if (strike >= 3) {
        printf("Game Over!\n");
        return 1; //Game Over!
    }
    else if (ball >= 4) {
        printf("Game Win??\n");
        return 2; //Game Win?
    }
    else {
        return 0;
    }
}