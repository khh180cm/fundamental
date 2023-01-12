#include <stdio.h>

int main(void)
{
    int n, k=0;
    printf("상수n 입력: ");
    scanf("%d", &n);

    while(n>1)
    {
        n/=2;
        ++k;
    }
    printf("공식을 만족하는 k의 최댓값은 %d \n", k); 
    return 0;
}
