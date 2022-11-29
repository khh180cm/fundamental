#include <stdio.h>

int main(void) {
    int num1;

    printf("한 개의 정수 입력:  ");
    scanf("%d", &num1);

    printf("%d^2=%d\n", num1, num1*num1);
    return 0;
}
