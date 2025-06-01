#include <stdio.h>

int main(void) {
    FILE *src = fopen("src.bin", "rb");
    FILE *des = fopen("des.bin", "wb");
    char buf[20];
    int readCnt;

    if (src == NULL || des == NULL) {
        puts("파일오픈 실패! \n");
        return EOF;
    }

    while (1) {
        /*
         * fread에서 2번째 인자는 한번에 읽을 바이트의수를 의미하니까
         * sizeof(char)으로 바꿔서 해도 괜찮을거 같음
         * 결국에는 20배수 만큼 버퍼를 읽어들이는데 만약에
         * 27버퍼만큼 존재해서 20버퍼만큼 빠지고 7버퍼가 남았으면
         * 
         */
        readCnt = fread((void *)buf, 1, sizeof(buf), src);

        if (readCnt < sizeof(buf)) {
            if (feof(src) != 0) {
                fwrite((void *)buf, 1, readCnt, des);
                puts("파일복사 완료 \n");
                break;
            }
            else {
                puts("파일복사 실패! \n");
            }
            break;
        }

        fwrite((void *)buf, 1, sizeof(buf), des);
    }

    fclose(src);
    fclose(des);
    return 0;
}