/*
성적 관리 프로그램을 작성하자.
과목은 네 과목, 학생도 네 명이다.
네 사람의 네 과목 점수를 입력을 먼저 받는다.
그리고 개인별 총점과 과목별 총점을 계산한다.
결과를 출력한다.
*/
#include <stdio.h>

int arr[5][5];

void WriteRecord(void)
{
    for (int i=0; i<4; i++)
    {
        int sum = 0;
        for (int j=0; j<4; j++)
        {
            printf("%d 과목 점수 : ", j+1);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
        arr[i][4] = sum;
        printf("\n");
    }
}

void WriteSumRecord(void)
{
    for (int i=0; i<4; i++)
    {
        int sum = 0;
        for (int j=0; j<4; j++)
            sum += arr[j][i];
        arr[4][i] = sum;
        arr[4][4] += sum;
    }
}

void ShowArr(void)
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }
}

int main(void)
{
    WriteRecord();
    WriteSumRecord();
    ShowArr();
    return 0;
}