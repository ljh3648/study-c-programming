#include <stdio.h>

int main(void) {
    FILE *src = fopen("src.txt", "rt");
    FILE *des = fopen("des.txt", "wt");
    char str[20];

    if (src == NULL || des == NULL) {
        puts("파일오픈 실패! \n");
        return EOF;
    }

    while (fgets(str, sizeof(str), src) != NULL) {
        fputs(str, des);
    }

    if (feof(src) != 0) { // feof은 파일에 끝에 도달하면 0이 아닌 값 반환
        puts("파일복사 완료! \n");
    }
    else {
        puts("파일복사 실패! \n");
    }

    fclose(src);
    fclose(des);

    return 0;
}