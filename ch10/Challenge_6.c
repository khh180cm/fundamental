#include <stdio.h>

int main(void)
{
    int seconds;
    int hr, min, sec;
    printf("초(second) 입력: ");
    scanf("%d", &seconds);

    hr = seconds / 3600; 
    seconds = seconds % 3600;

    min = seconds / 60;
    seconds = seconds % 60;
    sec = seconds;

    printf("[h:%d, m:%d, s:%d] \n", hr, min, sec);
    return 0;
}
