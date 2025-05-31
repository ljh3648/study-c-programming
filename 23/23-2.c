#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    Point p1, p2;
} Rectangle;

int main(void) {
    Rectangle a;

    a.p1.xpos = a.p1.ypos = 0;
    a.p2.xpos = a.p2.ypos = 100;

    int area = (a.p1.xpos + a.p2.ypos) * (a.p1.xpos + a.p2.ypos);

    printf("넓이는 : %d", area);

    return 0;
}