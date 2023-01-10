#include <stdio.h>

void HowToRunProgram(void);
int ReadNum(void);
int FindMax(int, int, int);
int FindMin(int, int, int);
void ShowMaxResult(int);
void ShowMinResult(int);

int main(void)
{
    int num1, num2, num3, min, max;
    HowToRunProgram();
    num1=ReadNum();
    num2=ReadNum();
    num3=ReadNum();

    max = FindMax(num1, num2, num3);
    min = FindMin(num1, num2, num3);
    
    ShowMaxResult(max);
    ShowMinResult(min);
    return 0;
}

void HowToRunProgram(void)
{
    printf("세 개의 정수를 입력하세요. \n");
}

int ReadNum(void)
{
    int num;
    scanf("%d", &num);
    return num;
}

int FindMax(int num1, int num2, int num3)
{
    if(num1>num2)
        return num1 > num3 ? num1 : num3; 
    else
        return num2 > num3 ? num2 : num3;
}

int FindMin(int num1, int num2, int num3)
{
    if(num1<num2)
        return num1<num3 ? num1 : num3;
    else
        return num2<num3 ? num2 : num3;
}

void ShowMaxResult(int num)
{
    printf("최댓값은 %d입니다. \n", num);
}

void ShowMinResult(int num)
{
    printf("최솟값은 %d입니다. \n", num);
}
