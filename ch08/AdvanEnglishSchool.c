#include <stdio.h>

int main(void)
{
    char sel;
    printf("M 오전, A 오후, E 저녁");
    printf("입력: ");
    scanf("%c", &sel);

    switch(sel)
    {
        case 'M':
        case 'm':
            printf("Morning");
            break;
        case 'A':
        case 'a':
            printf("Afternoon");
            break;
        case 'E':
        case 'e':
            printf("Evening");
            break;
        default:
            printf("I don't know");
            break;
    }
    printf("\n");
    return 0;
}
