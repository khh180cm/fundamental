/*
두 개의 int형 포인터 변수와 길이가 5인 int형 배열을 선언한다.
그리고 MaxAndMin이라는 함수를 정의하고 위 배열과 두 포인터를 전달한다.
포인터 변수 maxPtr엔 가장 큰 값이 저장된 배열요소의 주소 값이,
포인터 변수 minPtr엔 가장 작은 값이 저장된 배열 요소의 주소 값이 저장돼야 한다.
*/
#include <stdio.h>

void MaxAndMin(int ** mx_Ptr, int ** mn_Ptr, int * arr, int length)
{
    int * max, * min;
    max = min = arr;
    for (int i = 0; i < length; i++)
    {
        if (*(arr+i) > *max)
            max = &arr[i];
        if (*(arr+i) < *min)
            min = &(arr[i]);
    }
    * mx_Ptr = max;
    * mn_Ptr = min;
}

int main(void)
{
    int * maxPtr, * minPtr;
    int arr[5];
    int arrLen = sizeof(arr) / sizeof(int);

    for (int i = 0; i < arrLen; i++)
    {
        printf("%d번째 숫자 입력 : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");

    MaxAndMin(&maxPtr, &minPtr, arr, arrLen);

    printf("최대 : %d\n최소 : %d \n", *maxPtr, *minPtr);
    return 0;
}