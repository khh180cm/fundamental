#include <stdio.h>

int main(void)
{
    // 10개의 소수(Prime Number)를 출력하는 프로그램
    int NumOfRes = 10, num=2;
    while(NumOfRes!=0)
    {
        int cnt=0;
        for(int i=1; i<=num; i++)
        {
            if(num%i == 0)
                ++cnt;
        }
        if(cnt==2)
        {
            printf("%d ", num);
            --NumOfRes;
        }
        ++num;
    }
    printf("\n");
    return 0; 
}
