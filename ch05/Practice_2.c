#include <stdio.h>

int main(void) {
    double x1, x2;
    printf("임의의 두 실수를 입력하세요 : ");
    scanf("%lf %lf", &x1, &x2);
    printf("%lf + %lf = %lf\n", x1, x2, x1+x2);
    printf("%lf - %lf = %lf\n", x1, x2, x1-x2);
    printf("%lf * %lf = %lf\n", x1, x2, x1*x2);
    printf("%lf / %lf = %lf\n", x1, x2, x1/x2);
    return 0;
}
