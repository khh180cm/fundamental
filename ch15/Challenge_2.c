
/*
10진수 형태의 정수를 하나 입력 받은 후, 2진수로 변환해서 출력하는 프로그램
*/
#include <stdio.h>

void DecToBin(int num)
{
    if (num<=1)
    {
        printf("%d", num);
    }
    else
    {
        DecToBin(num/2);
        printf("%d", num%2);
    }
}

int main(void)
{
    int num;

    printf("10진수 정수 입력 : ");
    scanf("%d", &num);

    DecToBin(num);
    printf("\n");

    return 0;
}