#include <stdio.h>

int main(void)
{
    int arr[3][2];

    for (int i=0; i<3; i++)
        for (int j=0; j<2; j++)
        {
            printf("%d행 %d열 요소의 주소 : %p \n", i, j, &arr[i][j]);
        }
    return 0;
}