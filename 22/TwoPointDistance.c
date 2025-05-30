#include <stdio.h>
#include <math.h>

/*
    리눅스 계열에서 GCC를 통해 컴파일할때 빌드 옵션에 -lm 옵션을 추가해야해요.
    sqrt는 math.h 라이브러리를 사용하는데 기본적으로 링크가 되어있지않아 라이브러리를 찾을 수 있도록
    링크를 해주는 옵션이라고 합니다.
    출처: https://stackoverflow.com/questions/10409032/why-am-i-getting-undefined-reference-to-sqrt-error-even-though-i-include-math
*/

struct point {
    int xpos;
    int ypos;
};

int main(void) {
    struct point pos1, pos2;
    double distance;

    fputs("point1 Pos: ", stdout);
    scanf("%d %d", &pos1.xpos, &pos1.ypos);

    fputs("point2 Pos: ", stdout);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    distance = sqrt((double)((pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos) +
        (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos)));

    printf("두 점의 거리는 %g 입니다. \n", distance);
    
    return 0;
}