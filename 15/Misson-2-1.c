#include <stdio.h>

void show_odd_number(const int *, int, int);
void show_even_number(const int *, int, int);

int main(void)
{
    int value[10] = {0};

    int odd_cnt = 0;
    int even_cnt = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("%d", &value[i]);
        value[i] % 2 != 0 ? odd_cnt++ : even_cnt++;
    }

    show_odd_number(&value[0], sizeof(value) / sizeof(int), odd_cnt);
    show_even_number(&value[0], sizeof(value) / sizeof(int), even_cnt);

    return 0;
}

void show_odd_number(const int *odd_value, int len, int odd_cnt)
{
    int cnt = 0;
    printf("홀수 출력: ");
    for (int i = 0; i < len; i++)
    {
        if (*(odd_value + i) % 2 != 0 && cnt != odd_cnt - 1)
        {
            printf("%d, ", *(odd_value + i));
            cnt++;
        }
        else if (*(odd_value + i) % 2 != 0 && cnt == odd_cnt - 1)
            printf("%d \n", odd_value[i]);
    }
}

void show_even_number(const int *even_value, int len, int even_cnt)
{
    int cnt = 0;
    printf("짝수 출력: ");
    for (int i = 0; i < len; i++)
    {
        if (*(even_value + i) % 2 == 0 && cnt != even_cnt - 1)
        {
            printf("%d, ", *(even_value + i));
            cnt++;
        }
        else if (*(even_value + i) % 2 == 0 && cnt == even_cnt - 1)
            printf("%d \n", even_value[i]);
    }
}