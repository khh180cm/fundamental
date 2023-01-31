#include <stdio.h>

int main(void)
{
    int arr1[3][4];
    int arr2[7][9];

    printf("행 3, 열 4: %lu \n", sizeof(arr1));
    printf("행 7, 열 9: %lu \n", sizeof(arr2));
    return 0;
}