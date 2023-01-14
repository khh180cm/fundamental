#include <stdio.h>

int main(void)
{
    for(int i=1; i<9; i++)
    {
        for(int j=1; j<9; j++)
        {
            if(i+j == 9)
                printf("%d %d\n", i, j);
        }
    }
    return 0;
}
