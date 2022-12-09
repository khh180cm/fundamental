#include <stdio.h>

int main(void) {
    int num;
    printf("실수가 아닌 수를 입력하세요 : ");
    scanf("%d", &num);

    num = ~num+1;
    printf("부호를 바꾼  결과는 %d입니다\n", num);
    return 0;
}

