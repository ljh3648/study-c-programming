#include <stdio.h>
#include <stdlib.h>

int main(void){
    int *val = (int *)malloc(sizeof(int)*5);
    int n = 0;
    while(1){
        scanf("%d", &val[n]);
        if(val[n] == -1) break;
        int current_size = sizeof(val)/sizeof(int);
        if(n == current_size - 1){
            val = (int *)realloc(val, sizeof(int) * (current_size + 3));
        }
        n++;
    }

    for(int i = 0; i < n + 1; i++) printf("%d ", val[i]);
    return 0;
}