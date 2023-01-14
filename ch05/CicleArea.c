#include <stdio.h>

int main(void) {
    double rad, area;
    printf("원의 반지름 입력 : ");
    scanf("%lf", &rad);
    area = rad*rad*3.141592;
    printf("원의 넓이 :  %f \n", area);

    return 0;
}
