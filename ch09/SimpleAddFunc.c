#include <stdio.h>

int Add(int num1, int num2)
{
    return num1+num2;
}

int main(void)
{
    int result;
    result = Add(3, 5);
    printf("덧셈결과1 : %d\n", result);

    result = Add(5, 9);
    printf("덧셈결과2 : %d\n", result);

    return 0;
}
