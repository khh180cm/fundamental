#include <stdio.h>

int main(void) {
    int start=0, end=0, res=0, num;
    printf("오름차순으로 정수 두 개를 입력하세요 : ");
    scanf("%d %d", &start, &end);
    num=start;

    while(num<=end)
    {
        res+=num;
        ++num;
    }

    printf("%d와(과) %d 사이의 정수 합은 %d입니다\n", start, end, res);
    return 0;
}
