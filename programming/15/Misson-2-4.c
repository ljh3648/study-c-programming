#include <stdio.h>

int main(void){
    const int size = 30;
    char arr[size];
    int len = 0;

    printf("문자열 입력: ");
    scanf("%s", arr);

    for(int i = 0; i<size; i++){
        len++;
        if(arr[i] == '\0') break;
    }

    for(int i = 0, j = len-2; i < (len-1) / 2; i++, j--){
        if(arr[i] != arr[j]){
            printf("회문이 아닙니다.");
            return 0;
        }
    }

    printf("회문입니다.");

    // printf("입력된 문자열은 : %s \n", a);

    return 0;
}