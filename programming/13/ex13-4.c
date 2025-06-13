#include <stdio.h>

int main(void)
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr, *ptr2 = &arr[5];
 
    for(int i=0; i<3; i++){
        int temp = *(ptr1+i);
        *(ptr1+i) = *(ptr2-i);
        *(ptr2-i) = temp;
    }

    for(int i=0; i<sizeof(arr)/sizeof(int); i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}