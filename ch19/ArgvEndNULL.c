#include <stdio.h>

int main(int argc, char * argv[])
{
    int i=0;
    printf("전달된 문자열의 수 : %d \n", argc);

    while(argv[i] != NULL)
    {
        printf("%s \n", argv[i]);
        ++i;
    }
}