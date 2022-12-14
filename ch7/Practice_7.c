#include <stdio.h>

int main(void) {
    int i=0, j=0;
    const int LineNum = 5;

    while (i < LineNum)
    {
        j=0;
        while (j < i)
        {
            printf("o");
            ++j;
        }
        printf("*\n");
        ++i;
    }
    return 0;
}
