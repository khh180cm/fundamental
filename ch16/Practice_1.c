// 가로 길이가 9, 세로 길이가 3인 int형 2차원 배열을 선언하여 구구단 2단, 3단, 5단을 저장하자

#include <stdio.h>

int main(void)
{
    int arr[3][9];

    for (int i=2; i<5; i++)
    {
        for (int j=1; j<10; j++)
        {
            arr[i-2][j-1] = i * j;
        }
    }

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<9; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}