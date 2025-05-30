#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
    char str[100];
    int sum = 0;

    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum  += str[i] - '0';
        }
    }

    printf("%d", sum);

    return 0;
}