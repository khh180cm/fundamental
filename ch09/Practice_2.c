#include <stdio.h>
double CelToFah(double);
double FahToCel(double);

int main(void)
{
    int choice;
    double num;
    printf("1.섭씨를 화씨로 2.화씨를 섭씨로 \n");
    printf("선택>>");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("섭씨 입력: ");
        scanf("%lf", &num);
        printf("변환된 화씨: %.2f \n", CelToFah(num));
    }
    else if(choice==2)
    {
        printf("화씨 입력: ");
        scanf("%lf", &num);
        printf("변환된 섭씨: %.2f \n", FahToCel(num));
    }
    else
        printf("선택 오류\n");

    return 0;
}

double CelToFah(double cel)
{
    return 1.8*cel + 32;
}

double FahToCel(double fah)
{
    return (fah-32) / 1.8;
}
