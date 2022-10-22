#include<stdio.h>
#include<cs50.h>

int main (void)
int main(void)
{
    int n;
    //get input from users
    do
    {
        n = get_int("enter hight: ");
    }
    while(n<1 || n>8);
    
    //loop for line hight
    int x;
    for(x=0 ; x<n ; x++)
    {
        //loop for spaces
        int s;
        for(s=n ; s-1>x ; s--)
        {
            printf(" ");
        }
        //loop for number of dashes
        int i;
        for(i=0 ; i<= x ; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}
