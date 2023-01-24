#include <stdio.h>

int main(void)
{
    int arr[6]={1, 2, 3, 4, 5, 6};
    int temp;
    int * first = arr;
    int * last = &arr[5];

    while(first<=last)
    {
        temp = *(first);
        *(first) = *(last);
        *(last) = temp;
        ++first, --last;
    }

    for(int i=0; i<6; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}