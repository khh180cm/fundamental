#include <stdio.h>

int main(void)
{
    int num1=10, num2=20;
    int * ptr1=&num1;
    int * ptr2=&num2;
    int * temp;

    (*ptr1)+=10;
    (*ptr2)-=10;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp;

    printf("num1: %d, num2: %d \n", *ptr2, *ptr1);
    return 0;
}
