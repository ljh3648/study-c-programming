#include <stdio.h>
// #include <string.h>

int main(void) {
    FILE *fp = fopen("mystory.txt", "wt");

    if (fp == NULL) {
        printf("파일오픈 실패!\n");
        return EOF;
    }

    fputs("#이름: 이지훈 \n", fp);
    fputs("#주민등록번호: 123456-1234567\n", fp);
    fputs("#전화번호: 010-1234-1234", fp);

    fclose(fp);
    // char s_name[] = "#이름: ";
    // char s_person_id[] = "#주민번호: ";
    // char s_phone_num[] = "#전화번호: ";

    // char name[20];
    // char person_id[20];
    // char phone_num[20];

    // printf("#이름: ");
    // fgets(name, sizeof(name) / sizeof(char), stdin);
    // printf("#주민번호: ");
    // fgets(person_id, sizeof(person_id) / sizeof(char), stdin);
    // printf("#전화번호: ");
    // fgets(phone_num, sizeof(phone_num) / sizeof(char), stdin);

    // fputs(s_name, fp);
    // fputs(name, fp);

    // fputs(s_person_id, fp);
    // fputs(person_id, fp);

    // fputs(s_name, fp);
    // fputs(phone_num, fp);

    // fclose(fp);
    return 0;
}