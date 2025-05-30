#include <stdio.h>

struct employe {
    char name[20];
    char id[20];
    int pay;
};

int main(void) {
    struct employe person1;

    fputs("이름 입력: ", stdout);
    scanf("%s", person1.name);

    fputs("주민등록번호 입력: ", stdout);
    scanf("%s", person1.id);

    fputs("급여정보 입력: ", stdout);
    scanf("%d", &person1.pay);


    printf("이름: %s \n", person1.name);
    printf("주민등록번호: %s \n", person1.id);
    printf("급여: %d \n", person1.pay);

    return 0;
}