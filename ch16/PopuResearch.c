#include <stdio.h>

int main(void)
{
    int villa[4][2];
    int popu;

    // 거주인원 입력
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<2; j++)
        {
            printf("%d층 %d호 인구수 : ", i+1, j+1);
            scanf("%d", &villa[i][j]);
        }
    }

    // 층별 인구 출력
    for (int i=0; i<4; i++)
    {
        int sum=0;
        for (int j=0; j<2; j++)
        {
            sum+=villa[i][j];
        }
        printf("%d층 인구수 : %d \n", i+1, sum);
    }
    return 0;
}