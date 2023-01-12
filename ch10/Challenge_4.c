#include <stdio.h>

int main(void)
{
    int money=3500, bread=500, cookie=700, coke=400;
    printf("당신이 소유하고 있는 금액 : %d \n", money);
    for(int i=1; i<7; i++) 
    {
        for(int j=1; j<5; j++)
        {
            for(int k=1; k<8; k++)
            {
                int result = money - (bread*i + cookie*j + coke*k);
                if(result==0)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", i, j, k);
            }
        }
    }

    return 0;
}
