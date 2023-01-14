#include <stdio.h>

int main(void)
{
    int arrLen=5, sum=0, min, max;
    int arr[arrLen];

    printf("%d개의 정수를 입력하세요 \n", arrLen);
    for(int i=0; i<arrLen; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
        sum+=arr[i];
        if(i==0)
            max=arr[0], min=arr[0];
        else
        {
            max = (max>arr[i]) ? max : arr[i];
            min = (min<arr[i]) ? min : arr[i];
        }
    }

    printf("입력된 정수 중에서 최댓값: %d \n", max);
    printf("입력된 정수 중에서 최솟값: %d \n", min);
    printf("입력된 정수의 총 합: %d \n", sum);
    return 0;
}
