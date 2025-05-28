// 좀더 개선하고 싶은 의지가 생긴다.
#include <stdio.h>

void ShowArr(int size, int (*arr)[size]);

int main(void){
    int size = 0;
    scanf("%d", &size);

    int arr[size][size];
    int value_count = 1;
    int final_value = size * size;

    int x = 0, y = 0, cycle = 0;
    while(value_count <= final_value){
        while(y < size - cycle){
            arr[x][y++] = value_count++;
        }
        x++, y--;
        while(x < size - cycle){
            arr[x++][y] = value_count++;
        }
        x--, y--;
        while(y >= 0 + cycle){
            arr[x][y--] = value_count++;
        }
        x--, y++;
        while(x > 0 + cycle){
            arr[x--][y] = value_count++;
        }
        x++, y++, cycle++;
    }

    ShowArr(size, arr);

    return 0;
}

void ShowArr(int size, int (*arr)[size]){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%3d ", arr[i][j]);
        }
        printf("\n"); 
    }
    printf("\n");
}