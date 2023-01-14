#include <stdio.h>

int main(void) {
    int cnt=0, num=0;
    printf("양의 정수 입력 : ");
    scanf("%d", &cnt);

    while (num<cnt)
    {
        printf("Hello world!\n");
        ++num;
    }

    return 0;
}
