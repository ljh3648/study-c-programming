#include <stdio.h>
#define MAX(A, B) (A > B) ? A : B

int main(void){
    printf("3과 4중에 큰 것은 : %d 입니다", MAX(3,4));
    return 0;
}