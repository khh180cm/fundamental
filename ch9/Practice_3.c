#include <stdio.h>
void GetFibos(int);

int main(void)
{
    int cnt;
    printf("몇 개의 피보나치 수열을 보시겠습니까:  ");
    scanf("%d", &cnt);

    GetFibos(cnt);
}

void GetFibos(int n)
{
    int prevprev=0, prev=0, cur;
    for(int i = 0; i<n; i++)
    {
        if(n<3)
        {
            if(n==1)
                cur = 0;
            else
                cur = 1;
            printf("%d", cur);
        }
        else
        {
            cur = prevprev + prev;
            printf("%d", cur);
        }
        prevprev = prev;
        prev = cur;
    }
    printf("\n");
}
