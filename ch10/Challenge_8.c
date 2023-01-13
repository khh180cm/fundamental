#include <stdio.h>

int PowerOfTwo(int n)
{
    // 2의 n승을 구하는 재귀함수
    if(n==0) 
        return 1;
    else if(n==1)
        return 2;
    else
        return 2 * PowerOfTwo(n-1);
}

int main(void)
{
    int num;
    printf("정수 입력 : ");
    scanf("%d", &num);

    printf("2의 %d승은 %d \n", num, PowerOfTwo(num));
    return 0;
}
