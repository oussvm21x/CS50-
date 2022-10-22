#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    float cash;
    int coins = 0;
    //ask user for cash
    do
    {
        cash = get_float("Cash amont: ");
    }
    while(cash < 0 || cash>4000000000);

    cash = round(cash*100);
    printf("%f penis \n",cash);

    //calculating number of coins

    while(cash>=25)
    {
        coins++;
        cash = cash - 25;
    }
    while(cash>=10 && cash<25)
    {
        coins++;
        cash = cash - 10;
    }
    while(cash>=5 && cash<10)
    {
        coins++;
        cash = cash - 5;
    }
    while(cash>=1 && cash<5)
    {
        coins++;
        cash = cash - 1;
    }
    //print number of coins
    printf("%i\n",coins);
}
