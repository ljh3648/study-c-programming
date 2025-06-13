#include <stdio.h>

int main(void) {
    int ch;
    FILE *fp = fopen("data.txt", "rt");

    if (fp == NULL){
        puts(" 파일 오픈 실패 ! \n");
        return EOF;
    }

    for(int i = 0; i < 3; i++){
        ch=fgetc(fp);
        printf("%c \n", ch);
    }

    fclose(fp);
    return 0;
}