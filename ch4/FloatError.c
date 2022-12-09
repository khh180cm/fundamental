#include <stdio.h>

int main(void) {
    int i;
    float num=0;
    int iter_cnt = 30;

    for(i=0; i<iter_cnt; i++)
        num+=0.1;
    printf("0.1을 %d번 더한 결과: %f \n", iter_cnt, num);

    return 0;
}
