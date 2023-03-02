#include <stdio.h>

int main(void)
{
    int ch;

    ch=getchar();
    if (ch>=65 && ch <=90)
        ch+=32;
    else if (ch>=97 && ch <=122)
        ch-=32;
    else
    {
        printf("Error");
        return -1;
    }
    putchar(ch);
    return 0;
}