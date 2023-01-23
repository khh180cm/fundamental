#include <stdio.h>

int main(void)
{
    char word[50];
    int i=0, big_ascii=0;

    printf("영단어 입력: ");
    scanf("%s", word);

    while(word[i] != '\0')
    {
        if(word[i] > big_ascii)
            big_ascii = word[i];
        ++i;
    }

    printf("가장 큰 ASCII 코드값은 %c \n", big_ascii);
    return 0;
}
