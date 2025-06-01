#include <stdio.h>

int main(void) {
    FILE *fp = fopen("simple.txt", "wt");
    if (fp == NULL) {
        printf("파일 오픈 실패! \n");
        return EOF;
    }

    fputc('A', fp);
    fputc('B', fp);
    fputs("Hello, World! \n", fp);
    fputs("Your name is Lee \n", fp);
    fclose(fp);

    return 0;
}