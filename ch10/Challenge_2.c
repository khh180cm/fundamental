#include <stdio.h>

void HowToRunProgram(void)
{
    printf("두 개의 자연수를 입력하세요. \n");
}

int ReadNum(void)
{
    int num;
    printf("입력: ");
    scanf("%d", &num);
    return num;
}

void GuGuDan(int num1, int num2)
{
    int from, to;
    from = num1>num2 ? num2 : num1;
    to = num1>num2 ? num1 : num2;

    for(; from<=to; from++)
    {
        for(int i=1; i<10; i++)
        {
            printf("%d x %d = %d \n", from, i, from * i);
        }
    }
    
}

int main(void)
{
    int num1, num2;
    HowToRunProgram();
    num1 = ReadNum();
    num2 = ReadNum();

    GuGuDan(num1, num2);

    return 0;
}
