#include <stdio.h>

struct employe {
    char name[20];
    char id[20];
    int pay;
};

int main(void) {
    struct employe person[3];

    for (int i = 0; i < 3; i++) {
        scanf("%s", person[i].name);
        scanf("%s", person[i].id);
        scanf("%d", &person[i].pay);
    }

    for (int i = 0; i < 3; i++) {
    printf("이름: %s \n", person[i].name);
    printf("주민등록번호: %s \n", person[i].id);
    printf("급여: %d \n", person[i].pay);
    }

    return 0;
}