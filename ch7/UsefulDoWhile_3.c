#include <stdio.h>

int main(void) {
    int num=0, res=0;
    printf("정수 입력(0 to quit) : ");
    scanf("%d", &num);

    while (num)
    {
        res+=num;
        printf("정수 입력(0 to quit) : ");
        scanf("%d", &num);
    }
    printf("합계 : %d\n", res);
    return 0;
}
