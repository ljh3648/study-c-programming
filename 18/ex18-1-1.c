#include <stdio.h>

void SimpleFuncOne(int **arr1,int *(*arr2)[5]){}
void SimpleFuncTwo(int ***arr1,int ***(*arr2)[4]){}


int main(void){
    int *arr1[3];
    int *arr2[4][5];
    int **arr3[3];
    int ***arr4[2][4];

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);

    return 0;
}