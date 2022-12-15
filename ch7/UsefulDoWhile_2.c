#include <stdio.h>

int main(void) {
    int num=1, res=0;
    while (num)
    {
        printf("정수 입력(0 to quit) : ");
        scanf("%d", &num);
        res+=num;
    }
    printf("합계 : %d\n", res);
    return 0;
}
