#include <stdio.h>

int main(void) {
    int kor, eng, math, avg;
    char result;
    printf("국영수 점수를 입력하세요 : ");
    scanf("%d %d %d", &kor, &eng, &math);

    avg = (kor+eng+math) / 3;
    result = avg>=90 ? 'A' : (avg>=80 ? 'B' : (avg>=70 ? 'C' : (avg>=60 ? 'D' : 'F')));
    printf("%c\n", result);

    return 0;
}
