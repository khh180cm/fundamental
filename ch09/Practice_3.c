#include <stdio.h>
int GetNthFibo(int);
void ShowFiboUntil(int);

int main(void)
{
    int n;
    printf("몇 개의 피보나치 수열을 보시겠습니까:  ");
    scanf("%d", &n);

    ShowFiboUntil(n);
    return 0;
}

int GetNthFibo(int n)
{
    return 0;
}

void ShowFiboUntil(int n)
{
    for(int i=1; i<n+1; i++)
    {
        printf("%d ", GetNthFibo(i));
    }
}

