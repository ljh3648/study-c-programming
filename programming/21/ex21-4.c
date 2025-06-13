#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str1[30];
    char str2[30];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    int str1_name_index = 0;
    while (1) {
        if (str1[str1_name_index++] == ' ') break;
    }

    int str2_name_index = 0;
    while (1) {
        if (str2[str2_name_index++] == ' ') break;
    }

    int is_same_name = strncmp(str1, str2, str1_name_index);
    if (is_same_name == 0) printf("이름이 같습니다!\n");
    else printf("이름이 같지 않습니다.\n");

    int str1_age = atoi(&str1[str1_name_index]);
    int str2_age = atoi(&str2[str2_name_index]);

    if (str1_age == str2_age) printf("나이가 같습니다!\n");
    else printf("이름이 같지 않습니다.\n");
    return 0;
}