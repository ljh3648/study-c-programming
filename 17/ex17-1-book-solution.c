// 책에서는 함수안에 임시 포인터 변수를 만듦

#include <stdio.h>

void MaxAndMin(int ary[], int len, int **maxdptr, int **mindptr);

int main(void){
    int *maxPtr;
    int *minPtr;
    int arr[5] = {3, 4, 2, 5, 1};

    MaxAndMin(arr, sizeof(arr)/sizeof(int), &maxPtr, &minPtr);

    printf("최대값: %d 최소값: %d \n",*maxPtr, *minPtr);
    return 0;
}

void MaxAndMin(int ary[], int len, int **maxdptr, int **mindptr){
    int *max;
    int *min;

    max = min = &ary[0];
    for(int i=1; i < len; i++){
        if(*max< ary[i]) max = &ary[i];
        if(*min > ary[i]) min = &ary[i];           
    }

    *maxdptr = max;
    *mindptr = min;
}