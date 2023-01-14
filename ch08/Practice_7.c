#include <stdio.h>

int main(void)
{
    int num;
    printf("양의 정수 입력: ");
    scanf("%d", &num);

    num = num/10;
    switch(num)
    {
        case 0:  
            printf("0이상 10미만");
            break;
        case 1:
            printf("10이상 20미만");
            break;
        case 2:
            printf("20이상 30미만");
            break;
        default:
            printf("30이상");
            break;
    }
    printf("\n");
    return 0;
}
