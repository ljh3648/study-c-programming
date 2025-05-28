#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // num의 주소를 int형 포인터 ptr에 저장

    printf("변수 num의 주소: %p\n", (void *)&num); // 일반 변수의 주소도 %p로 출력 가능
    printf("포인터 ptr의 값 (가리키는 주소): %p\n", (void *)ptr);
    printf("포인터 ptr 자체의 주소: %p\n", (void *)&ptr); // 포인터 변수 자체의 주소

    return 0;
}