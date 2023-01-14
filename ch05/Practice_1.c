#include <stdio.h>

int main(void) {
    int x1, y1, x2, y2, result;
    printf("(x1, y1), (x2, y2)의 좌표값을 차례대로 입력하세요 : ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    result = (y2-y1)*(x2-x1);
    printf("두 점이 이루는 직사각형 넓이는%d입니다.\n", result);
    return 0;
}
