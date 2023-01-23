#include <stdio.h>

int main(void)
{
    char str[50];
    int idx=0;

    printf("영단어 입력: ");
    scanf("%s", str);

    while(str[idx]!='\0')
    {
        ++idx;
    }
    printf("영단어 길이: %d \n", idx);

    return 0;
}
