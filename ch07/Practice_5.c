#include <stdio.h>

int main(void) {
    int i=0, cnt=0, num=0, res=0;
    printf("입력할 양의 정수 갯수 : ");
    scanf("%d", &cnt);
    printf("\n");

    while(i<cnt)
    {
        printf("(%d/%d) 양의 정수를 입력하세요 : ", ++i, cnt);
        scanf("%d", &num);
        res+=num;
    }

    printf("평균값은 %f입니다\n", res / (float)cnt);
    return 0;

}
