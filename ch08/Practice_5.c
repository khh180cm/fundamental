#include <stdio.h>

int main(void) {
    int limit;
    for (int dan=2; dan<10; dan++)
    {
        if(dan%2 != 0) continue;
        for (int i=1; i<10; i++)
        {
            if(dan<i) break;

            printf("%d x %d = %d\n", dan, i, dan*i);
        }
    }

    return 0;
}
