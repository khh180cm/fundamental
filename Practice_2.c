/*
세 변수에 저장된 값을 서로 뒤바꾸는 함수를 정의하자.
예를 들어서 함수의 이름이 Swap3라 하면, 다음의 형태로 함수가 호출되어야 한다.
Swap3(&num1, &num2, &num3);

그리고 함수의 호출 결과로
num1에 저장된 값은 num2에,
num2에 저장된 값은 num3에,
num3에 저장된 값은 num1에
저장되어야 한다.

*/
#include <stdio.h>

void Swap3(int * ptr1, int * ptr2, int * ptr3)
{
    int temp = *ptr1;
    *ptr1 = * ptr3;
    *ptr3 = *ptr2;
    *ptr2 = temp;
}

int main(void)
{
    int num1 = 2, num2 = 5, num3 = 9;

    Swap3(&num1, &num2, &num3);

    printf("num1: %d \nnum2: %d \nnum3: %d \n", num1, num2, num3);
    return 0;
}