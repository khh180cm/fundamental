/*
길이가 10인 배열을 선언하고 총 10개의 정수를 입력 받는다.
단, 입력 받은 숫자가 홀수이면 배열의 앞에서부터 채워 나가고,
짝수이면 뒤에서부터 채워 나간다.
ex) [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] 순으로 입력했다면
결과는 [1, 3, 5, 7, 9, 2, 4, 6, 8, 10]이다.
*/
#include <stdio.h>

void OddFirstEvenLast(int * ptr)
{
}

int main(void)
{
    int arr[10];

    printf("총 10개의 숫자 입력\n");
    for (int i=0; i<10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }

    printf("배열 요소의 출력 : ");
    OddFirstEvenLast(arr);
    printf("\n");

    return 0;
}