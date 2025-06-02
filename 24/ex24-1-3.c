#include <stdio.h>

int main(void) {
    FILE *fp = fopen("mystory.txt", "rf");
    char str[100];

    if (fp == NULL) {
        printf("파일오픈 에러!\n");
        return EOF;
    }

    while (fgets(str, sizeof(str), fp) != NULL) {
        fputs(str, stdout);
    }

    fclose(fp);
    return 0;
}