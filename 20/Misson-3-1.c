/*
    도전! 프로그래밍3 1번 문제
    배열을 오른쪽으로 90도씩 회전해야 하는 문제

    임시 배열을 만들어서 각 원소가 회전해야하는 위치에 들어갈 수 있도록 코드를 작성
*/
#include <stdio.h>

void ShowArr(int (*arr)[4], int size);
void RotationArr(int (*arr)[4], int size);

int main(void){

    int arr[4][4] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    ShowArr(arr, sizeof(arr)/sizeof(arr[0]));

    for(int i = 0; i < 3; i++){
        RotationArr(arr, sizeof(arr)/sizeof(arr[0]));
        ShowArr(arr, sizeof(arr)/sizeof(arr[0]));
    }

    return 0;
}

void ShowArr(int (*arr)[4], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void RotationArr(int (*arr)[4], int size){
    int temp[size][size];

    // 배열 복사
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            temp[i][j] = arr[i][j];
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr[j][(size-1)-i] = temp[i][j];
        }
    }
}