#include <stdio.h>

int main(void)
{
    int arr[5]={1, 2, 3, 4, 5};
    int sum=0;
    int * ptr = &arr[4];

    for(int i=5; i>0; i--)
        sum += *(ptr--);

    printf("총합: %d \n", sum);
    return 0;
}