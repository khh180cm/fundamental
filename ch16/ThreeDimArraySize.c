#include <stdio.h>

int main(void)
{
    int arr1[2][3][4];
    double arr2[5][5][5];

    printf("높이2, 세로3, 가로4 int형 배열 : %lu \n", sizeof(arr1));
    printf("높이5, 세로5, 가로5 int형 배열 : %lu \n", sizeof(arr2));
    return 0;
}