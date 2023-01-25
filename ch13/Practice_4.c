#include <stdio.h>

int main(void)
{
    int arr[6]={1, 2, 3, 4, 5, 6};
    int temp;
    int * fptr = arr;
    int * bptr = &arr[5];

    while(fptr<=bptr)
    {
        temp = *(fptr);
        *(fptr) = *(bptr);
        *(bptr) = temp;
        ++fptr, --bptr;
    }

    for(int i=0; i<6; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}