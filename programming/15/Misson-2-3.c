#include <stdio.h>

int main(void){
    int val[10];
    int odd_cnt = 0, even_cnt = 9;

    printf("총 10개의 숫자 입력 \n");

    for(int i=0; i<10; i++){
        int input = 0;
        printf("입력: ");
        scanf("%d", &input);
        (input % 2 != 0) ? (val[odd_cnt++] = input) : (val[even_cnt--] = input); 
    }

    for(int i=0; i<10; i++){
        printf("%d ", val[i]);
    }
    return 0;
}