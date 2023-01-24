#include <stdio.h>

int main(void)
{
    int arr[5]={1, 2, 3, 4, 5};
    int * ptr = arr;

    for(int i=0; i<5; i++)
        *(ptr++)+=2;

    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]); printf("\n");
    return 0;
}