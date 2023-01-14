#include <stdio.h>

int main(void) {
    int num, res=0;

    while (num!=0)
    {
        printf("양의 정수 입력 : ");
        scanf("%d", &num);
        res+=num;
    }
    printf("프로그램을 종료합니다.\n누적된 값은 %d입니다.\n", res);
    return 0;
}
