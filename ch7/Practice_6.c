#include <stdio.h>

int main(void) {
    int cnt=0, num, res=0;
    const int MAX=5;

    while (cnt<MAX)
    {
        printf("1 이상의 숫자를 입력하세요(%d/%d) : ", cnt, MAX);
        scanf("%d", &num);
        while (num>=1)
        {
            res +=num;
            ++cnt;
            num=0;
        }
    }
    printf("%d회 입력한 값의 합은 %d\n", MAX, res);

    return 0;
}
