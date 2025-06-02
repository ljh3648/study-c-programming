#include <stdio.h>
#define PI 3.14
#define AREA(R) (PI) * (R) * (R)

int main(void){
    printf("반지름이 3인 원의 넓이 %g", AREA(3));
    return 0;
}