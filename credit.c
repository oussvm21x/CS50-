#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
    long num ;
    int digit = 0 , curent_digit = 0 , even_digit = 0 , odd_digit = 0 , total = 0 , even_digitx2 = 0;
    int digit = 0, curent_digit = 0, even_digit = 0, odd_digit = 0, total = 0, even_digitx2 = 0;
    bool its_even = false ;

    //Prompt user card num
@@ -56,7 +56,7 @@ int main(void)

    total = even_digit + odd_digit ;

    if ( total % 10 == 0)
    if (total % 10 == 0)
    {

        if(digit == 16)
        {
            
            if(MasterCard > 50 && MasterCard <56)
            {
                printf("MASTERCARD\n");
            }
        
            else if (Visa_16 == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        
        else if(digit == 15)
        {
            if(AmExp == 34 || AmExp == 37)
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        
        else if(digit == 13)
        {
            if(Visa_13 == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
            
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
    
    
    
