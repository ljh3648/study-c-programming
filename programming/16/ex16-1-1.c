#include <stdio.h>

int main(void){
    int mul_arr[3][9];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            mul_arr[i][j] = (i+2)*(j+1);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            printf("%2d ", mul_arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}