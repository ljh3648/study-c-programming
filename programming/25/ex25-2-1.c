#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);
    fgetc(stdin);

    char *str = (char *)malloc(sizeof(char) * n);

    fgets(str, n, stdin);
    str[strlen(str) - 1] = 0;

    for(int i = strlen(str); i >= 0; i--){
        if(str[i] == ' '){
            printf("%s", &str[i+1]);
            str[i] = 0;
        }
    }
    
    printf("%s", &str[0]);

    free(str);
    return 0;
}

    // int i = sizeof(char) * n - 1;

    // while (i >= 0) {
    //     if (str[i] == ' ') continue;
    //     int j = i;

    //     while (str[i] != ' '){

    // int i = sizeof(char) * n - 1;

    // while (i >= 0) {
    //     if (str[i] == ' ') continue;
    //     int j = i;

    //     while (str[i] != ' '){
    //         j--;
    //     }
    //     }
    //     i--;
    // }