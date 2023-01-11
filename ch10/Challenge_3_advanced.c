#include <stdio.h>

void HowToRunProgram(void)
{
    printf("입력한 두 자연수의 최대공약수를 구합니다 \n");
}

int ReadNum(void)
{
    int num;
    printf("자연수 한 개 입력: ");
    scanf("%d", &num);
    return num;
}

void GetGCD(num1, num2)
{
    // GCD: Greatest Common Denominator
    // 유클리드 호제법 풀이
    int big, small, remainder, gcd;
    big = num1>num2 ? num1 : num2;
    small = num1>num2 ? num2 : num1;

    do
    {
        remainder = big % small;
        big = small;
        small = remainder;
        printf("%d, %d, %d", big, small, remainder);
    }while(remainder==0);
    gcd = small;
    printf("최대공약수는 %d입니다. \n", gcd);
}

int main(void)
{
    int num1, num2;
    HowToRunProgram();
    num1 = ReadNum();
    num2 = ReadNum();

    GetGCD(num1, num2);

    return 0;
}
