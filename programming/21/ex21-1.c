#include <stdio.h>

int main(void) {
    int str = 0;

    str = getchar();

    if (('A' <= str) && (str <= 'Z')) str += 'a' - 'A';
    else if (('a' <= str) && (str <= 'z')) str += 'a' - 'A';
    else printf("잘못된 입력입니다.\n");

    putchar(str);

    return 0;
}