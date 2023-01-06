#include <stdio.h>

void HowToRunProgram(void);
int ReadNum(void);
int WhatMaxNumberIs(int, int, int);
int WhatMinNumberIs(int, int, int);
int CompareAndReturnMax(int,int);
int CompareAndReturnMin(int, int);
void ShowMaxResult(int);
void ShowMinResult(int);

int main(void)
{
    int num1, num2, num3, min, max;
    HowToRunProgram();
    num1=ReadNum();
    num2=ReadNum();
    num3=ReadNum();

    max = WhatMaxNumberIs(num1, num2, num3);
    min = WhatMinNumberIs(num1, num2, num3);
    
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

int WhatMaxNumberIs(int num1, int num2, int num3)
{
    int temp;
    temp = CompareAndReturnMax(num1, num2);
    if(temp>num3)
        return temp;
    else
        return num3;
}

int WhatMinNumberIs(int num1, int num2, int num3)
{
    int temp;
    temp = CompareAndReturnMin(num1, num2);
    if(temp>num3)
        return num3;
    else
        return temp;
}

int CompareAndReturnMax(int num1, int num2)
{
    if(num1>num2)
        return num1;
    else
        return num2;
}

int CompareAndReturnMin(int num1, int num2)
{
    if(num1>num2)
        return num2;
    else
        return num1;
}

void ShowMaxResult(int num)
{
    printf("최댓값은 %d입니다. \n", num);
}

void ShowMinResult(int num)
{
    printf("최솟값은 %d입니다. \n", num);
}
