#include <stdio.h>

int getFileSize(FILE *fp) {
    int crn_pos = ftell(fp);
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp, crn_pos, SEEK_SET);
    return size;
}

int main(void) {
    FILE *fp = fopen("simple.txt", "rb");

    if (fp == NULL) {
        printf("파일오픈 실패!\n");
        return EOF;
    }

    printf("파일의 사이즈는 %d 바이트입니다.\n", getFileSize(fp));
    return 0;
}