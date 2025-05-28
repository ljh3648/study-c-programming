#include <stdio.h>

int main(void){
    int num = 10;
    int *ptr1 = &num; // ptr1은 num의 메모리 주소를 가르킴.
    int *ptr2 = ptr1; // ptr2는 ptr1의 메모리 주소를 가르킴.

    (*ptr1)++;
    (*ptr2)++;
    printf("num = %d\n", num);
    return 0;
}