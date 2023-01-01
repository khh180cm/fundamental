#include <stdio.h>

int main(void) {
    int kor, eng, math, result;
    printf("국영수 점수를 입력하세요 : ");
    scanf("%d %d %d", &kor, &eng, &math);

    result = (kor+eng+math) / 3;
    if(result>=90)
        printf("A");
    else if(result>=80)    
        printf("B");
    else if(result>=70)
        printf("C");
    else if(result>=60)
        printf("D");
    else
        printf("F");
    printf("\n");

    return 0;
}
