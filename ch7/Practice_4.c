#include <stdio.h>

int main(void) {
    int dan, i=9;
    printf("역순 구구단\n단 수를 입력하세요 : ");
    scanf("%d", &dan);
    while(i>0)
    {
        printf("%d x %d = %d\n", dan, i, dan*i);
        --i;
    }
}
