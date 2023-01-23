/*
 * 펠린드롬 구현
 */

#include <stdio.h>

int main(void)
{
    char word[50], temp;
    int idx=0, middle, len;
    printf("영단어 입력: ");
    scanf("%s", word);

    while(word[idx] != '\0')
        ++idx;
    len = idx-1;
    middle = len/2;

    idx=0; 
    while(idx<=middle)
    {
        temp=word[idx];
        word[idx]=word[len-idx];
        word[len-idx]=temp;
        ++idx;
    }
    
    printf("펠린드롭 문자열: %s \n", word);
    return 0;
}
