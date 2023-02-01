#include <stdio.h>

int main(void)
{
    int arr[5][5] = {0};

    // 점수 입력
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("점수 입력: ");
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    // 행 총합 계산
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
            arr[i][4] += arr[i][j];
    }

    // 열 총합 계산
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<4; j++)
            arr[4][i] += arr[j][i];
    }

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}