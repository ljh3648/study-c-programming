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
    *maxdptr = &ary[0];
    *mindptr = &ary[0];
    for(int i=1; i < len; i++){
        if(**maxdptr < ary[i]) *maxdptr = &ary[i];
        if(**mindptr > ary[i]) *mindptr = &ary[i];           
    }
}