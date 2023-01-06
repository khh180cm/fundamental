#include <stdio.h>
double CelToFah(double);
double FahToCel(double);

int main(void)
{
    double cel = 70, fah = 270;
    printf("섭씨(%.2lf)를 화씨로 변환한 값은 %.2lf입니다. \n", cel, CelToFah(cel));
    printf("화씨(%.2lf)를 섭씨로 변환한 값은 %.2lf입니다. \n", fah, FahToCel(fah));
    return 0;
}

double CelToFah(double cel)
{
    return 1.8 * cel + 32;
}

double FahToCel(double fah)
{
    return (fah-32) / 1.8;
}
