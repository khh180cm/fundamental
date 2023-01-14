#include <stdio.h>

int NumberCompare(int, int);

int main(void)
{
    printf("3과 5중에 큰 수는 %d 이다. \n", NumberCompare(3,5));
    printf("7과 2중에 큰 수는 %d 이다. \n", NumberCompare(7,2));
    return 0;
}

int NumberCompare(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}
