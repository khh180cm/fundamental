#include <stdio.h>

int AbsoCompare(int, int);
int GetAbsoValue(int);

int main(void)
{
    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d 중 절댓값이 큰 정수: %d \n", num1, num2, AbsoCompare(num1, num2));
    return 0;
}


int AbsoCompare(int num1, int num2)
{
    num1 = GetAbsoValue(num1);
    num2 = GetAbsoValue(num2);
    return num1 > num2 ? num1 : num2;
}

int GetAbsoValue(int num)
{
    if(num<0)
        return num*(-1); 
    else
        return num;
}

