#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


bool IsNum(char l[]);
int main(int argc, string argv[])
{
    //
    if(argc == 2 && IsNum(argv[1])) //check if ther's only 1 argument 
    
    {
        int key = atoi(argv[1]); //convert string to int
        
        string text = get_string("plaintext: ");//get input from user
        printf("ciphertext: ");//print the sipher
        
        
        //loop trough text letter
        for(int i=0 ; i< strlen(text) ; i++)
        {
            if(text[i] >= 'a' && text[i] <='z')//search for miniscule letter
            {
                printf("%c", (((text[i] - 'a') + key) % 26) + 'a');//crype texte
            }
            
            else if(text[i] >= 'A' && text[i] <= 'Z')//search for majiscule letter
            {
                printf("%c", (((text[i] - 'A') + key) % 26) + 'A');//crypte text
            }
            
            else
            {
                printf("%c", text[i]);
            }
        }
        printf("\n");
        
        return 0;
    }
    
    else
    {
        printf("Usage: ./caesar key");
        return 1;
    }
}

bool IsNum(char l[]) // verify if its valid key
{

    int i;
    for(i=0 ; i < strlen(l) ; i++)
    {
        if(!isdigit(l[i]))
        {
            return false;
        }
    }

    return true;
}
