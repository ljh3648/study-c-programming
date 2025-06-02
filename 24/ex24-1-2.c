#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *fp = fopen("mystory.txt", "at");

    if (fp == NULL) {
        printf("파일오픈 실패!\n");
        return EOF;
    }
    fputs("\n#즐겨먹는 음식: 두부 \n", fp);
    fputs("#취미: 볼링 \n", fp);

    fclose(fp);
    return 0;
}