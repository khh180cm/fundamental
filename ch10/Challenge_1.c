#include <stdio.h>

int main(void)
{
    int num;
    printf("십진수를 16진수로 변환합니다 \n");
    printf("입력: ");
    scanf("%d", &num);

    printf("변환된 16진수 결과: %x \n", num);
    return 0;
}
