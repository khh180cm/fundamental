#include <stdio.h>

int main(void)
{
    char sentence[] = "Good time";
    int arrLen = sizeof(sentence) / sizeof(char);

    for(int i=0; i<arrLen; i++)
    {
        printf("%c", sentence[i]);
    }
    printf("\n");

    return 0;
}
