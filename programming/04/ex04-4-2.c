#include <stdio.h>

int main(void){
    int a = 3, b = 8, c = 4;
    int mul_value = 0;

    for(int i = 0; i < b; i++){
        mul_value = mul_value + a;
    }

    int div_value = 0;

    while( mul_value > 0 ){
        mul_value = mul_value - c;
        div_value++;
    }

    // 정답은 사실... 비트 연산자 << >> 를 이용해서 2의 배수라는 공통 점을 이용해서 구하는 문제였음...
    // 3 * 8 를 비트 연산자로 하려면 8 << 3 4로 나누려면 24 >> 4

    printf("%d", div_value);

    return 0;
}