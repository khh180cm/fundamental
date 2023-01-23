/*
인자로 전달된 수만큼의 피보나치 수열을 출력하는 함수를 정의해보자.
예를 들어서 프로그램 사용자가 5를 입력하면 0에서부터 시작해서 총 5개의 피보나치 수열을 출력해야 한다.
참고로 피보나치 수열은 다음과 같다.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
이렇듯 피보나치 수열은 0과 1에서 시작한다. 그리고 세 번째 이후의 수열부터는 이전의 두 값의 합으로 구성된다.
즉, 세 번재 수는 0과 1의 합으로 이뤄져서 1이 되고, 네 번째 수는 1과 1의 합으로 이뤄져서 2가 된다.
*/

#include <stdio.h>
int main(void)
{
    int n;
    int before_2=0, before_1=1, cur;
    printf("몇 개의 피보나치 수열을 보시겠습니까:  ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        if(i==0)
            cur = 0;
        else if(i==1)
            cur = 1;
        else
        {
            cur = before_2 + before_1;
            before_2 = before_1;
            before_1 = cur;
        }
        printf("%d ", cur);
    }
    printf("\n");

    return 0;
}