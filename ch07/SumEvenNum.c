#include <stdio.h>

int main(void) {
    int num=0, res=0;
    do 
    {
        res+=num;
        num+=2;
    }while(res<=2550 && num <=100);
    printf("합계 : %d\n", res);
    return 0;
}
