#include <stdio.h>

void AddArrayElem(int * ptr, int len, int add)
{
    for(int i=0; i<len; i++)
        ptr[i]+=add;
}

void ShowArrayElem(int * ptr, int len)
{
    for(int i=0; i<len; i++)
        printf("%d ", ptr[i]);
    printf("\n");
}

int main(void)
{
    int arr[3]={1, 2, 3};
    AddArrayElem(arr, sizeof(arr) / sizeof(int), 1);
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));

    AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));

    AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
    ShowArrayElem(arr, sizeof(arr) / sizeof(int));
    return 0;
}