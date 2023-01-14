#include <stdio.h>

int main(void)
{
    int num;
    printf("1이상 5이하의 정수 입력: ");
    scanf("%d", &num);

    switch(num)
    {
        case 1:
            printf("1은 ONE");
            break;
        case 2:
            printf("2는 TWO");
            break;
        case 3:
            printf("3는 THREE");
            break;
        case 4:
            printf("4는 FOUR");
            break;
        case 5:
            printf("5는 FIVE");
            break;
        default:
            printf("I don't know!");
    }
    printf("\n");

    return 0;

}
