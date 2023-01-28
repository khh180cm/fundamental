/*
변수 num에 저장된 값의 제곱을 계산하는 함수를 정의하고,
이를 호출하는 main함수를 작성하자
1) Call-by-value 기반의 SquareByValue_1 함수
2) Call-by-reference 기반의 SquareByValue_2 함수
*/
#include <stdio.h>

int SquareByValue_1(int num)
{
    // Call-by-value
    return num * num;
}

void SquareByValue_2(int * ptr)
{
    // Call-by-reference
    int origin = *ptr;
    *ptr = origin * origin;
}

int main(void)
{
    int num = 2;

    printf("%d \n", SquareByValue_1(num));

    SquareByValue_2(&num);
    printf("%d \n", num);

    return 0;
}