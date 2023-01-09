#include <stdio.h>
void Add(int);
int num;

int main(void)
{
    printf("num: %d \n", num);
    Add(3);
    printf("num: %d \n", num);
    ++num;
    printf("num: %d \n", num);
    return 0;
}

void Add(int val)
{
    num+=val;
}
