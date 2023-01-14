#include <stdio.h>

int main(void) {
    int i=0, num=0;
    printf("양의 정수 입력 : ");
    scanf("%d", &num);

    while (i<num)
        printf("%d\n", 3*(++i));

    return 0;
}
