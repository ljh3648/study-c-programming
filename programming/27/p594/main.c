#include <stdio.h>
#include "areaArith.h"
#include "roundArith.h"

// 컴파일 할때 옵션을 추가해야함.
// 먼저 이 파일이 저장된 공간으로 이동
// gcc-13 -g main.c basicArith.c areaArith.c roundArith.c -o main -lm
// ./main

int main(void){
	printf("삼각형 넓이(밑변 4, 높이2): %g \n", TriangleArea(4, 2));
	printf("원의 넓이(반지름 3) %g \n", CircleArea(3));
	
	printf("직사각형 둘레(밑변 2.4, 높이 5.2): %g \n", RectangleRound(2.4, 5.2));
	printf("정사각형 둘레(변의 길이 3): %g \n", SquareRound(3));

	return 0;
} 