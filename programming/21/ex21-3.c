#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20];
    char str2[20];
    char str3[20];

    fgets(str1, 20, stdin);
    fgets(str2, 20, stdin);

    str1[strlen(str1) - 1] = '\0';
    strcpy(str3, str1);

    strncat(str3, str2, sizeof(str3) - 1);
    str3[sizeof(str3) - 1] = '\0';
    
    fputs(str3, stdout);
    
    return 0;
}