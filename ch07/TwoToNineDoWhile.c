#include <stdio.h>

int main(void) {
    int dan=2, is;
    do 
    {
        is=1;
        do
        {
            printf("%d x %d = %d\n", dan, is, dan*is);
            ++is;
        }while(is<10);
        ++dan;
    }while(dan<10);
    return 0;
}
