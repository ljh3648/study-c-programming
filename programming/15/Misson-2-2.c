#include <stdio.h>

int main(void){
    int val = 0;

    printf("10진수 정수 입력: ");
    scanf("%d", &val);

    for(int i=3; i>=0; i--){
        printf("%d",( val & (1 << i) ) ? 1 : 0); // 조건에서 0이 아닌값은 모두 1이됨.
    }
    
    return 0;
}