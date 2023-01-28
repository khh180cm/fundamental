/*
main함수에 길이가 10인 배열을 선언하고 총 10개의 정수를 입력받자.
배열 내 홀수만 출력하는 함수와 배열 내 짝수만 출력하는 함수를 각각 정의하자.
홀수부터 출력하고 나서 짝수를 출력하자.
*/
#include <stdio.h>

void ShowOddNums(int * ptr)
{
    printf("홀수 출력");
    for(int i=0; i<10; i++)
    {
        if(ptr[i] % 2 == 1)
            printf("%d ", ptr[i]);
    }
    printf("\n");
}

void ShowEvenNums(int * ptr)
{
    printf("짝수 출력");
    for(int i=0; i<10; i++)
    {
        if(ptr[i] % 2 == 0)
            printf("%d ", ptr[i]);
    }
    printf("\n");

}

int main(void)
{
    int arr[10];

    printf("총 10개의 숫자 입력 \n");
    for(int i=0; i<10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    ShowOddNums(arr);
    ShowEvenNums(arr);
    return 0;
}