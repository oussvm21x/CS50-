#include <cs50.h>
#include <stdio.h>
int main(void)
{
    ///TODO : prompt for first size
    int s;
    do{
        s = get_int("enter a population size bigger then 9 : ");
    }
    while(s < 9);
    
    ///TODO : prompt for end size
    int f;
    do{
        f = get_int("enter a final population size: ");
    }
    while(s>f);
    ///TODO : calculate number of year until we rich thershold
    int ny=0 ;
    
    while(s<f){
        s = s+ s/3 -s/4;
        ny++;
    }
    printf("years: %i",ny);
    printf("Years: %i",ny);

    ///TODO : print number of years
}
