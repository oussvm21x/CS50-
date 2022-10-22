#include <math.h>
#include <stdlib.h>

bool is_valid (char let[]);
bool is_repeted (char l[]);
int main(int argc , char *argv[])
bool is_valid(char let[]);
bool is_repeted(char l[]);
int main(int argc, char *argv[])
{
    //Command line must take 2 argument
    if( argc == 2)
    if(argc == 2)
    {
        //See of argv[1] is contain all aphabetic letters
        if (strlen(argv[1]) ==26)
        {
            //Loop for letters
            if(is_valid(argv[1]))
            {
                //make sur that ther's no repeted letter
                if(is_repeted(argv[1]))
                {
                    //take input from user
                    string plaintext = get_string("pliantext:");
                    printf("ciphertext:");

                    //loop through letters of plain text
                    for(int i=0 ; i< strlen(plaintext) ; i++)
                   {
                    {
                        //for small letters
                        if(plaintext[i] >= 'a' && plaintext[i] <='z')//search for miniscule letter
                        {
                            plaintext[i] = argv[1][plaintext[i]-'a'];
                            printf("%c", tolower(plaintext[i]));//crype texte
                        }
                        //for capital letterd
                        else if(plaintext[i] >= 'A' && plaintext[i] <='Z')//search for miniscule letter
                        {
                            plaintext[i] = argv[1][plaintext[i]-'A'];
                            printf("%c", toupper(plaintext[i]));//crype texte
                        }
                        else if (plaintext[i] ==' ' || plaintext[i]==',' || isdigit(plaintext[i]) ||plaintext[i]=='.' || plaintext[i]=='?' )
                        //for non letters
                        else if (plaintext[i] ==' ' || plaintext[i]==',' || isdigit(plaintext[i]) ||plaintext[i]=='.' || plaintext[i]=='?')
                        {
                            printf("%c",plaintext[i]);
                        }
@@ -46,12 +52,14 @@ int main(int argc , char *argv[])
                   printf("\n");
                   return 0;
                }
                //for repeted letters's argument
                else
                {
                    printf("Key must contain no repeted char\n");
                    return 1;
                }
            }
            //for non alphabetic lettters
            else
            {
                printf("key must contain only alphabetic character\n");
@@ -60,21 +68,23 @@ int main(int argc , char *argv[])


        }
        //for argumrtn less then 26
        else
        {
            printf("Key must contain 26 characters.\n");
            return 1;
        }
    }
    //for no argument
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}


bool is_valid (char let[])
//check validty of argument
bool is_valid(char let[])
{
    int i;
    for(i=0 ; i<=26 ;i++)
@@ -89,7 +99,8 @@ bool is_valid (char let[])
    return true;
}

bool is_repeted (char str[])
//check for repeted letters in argument
bool is_repeted(char str[])
{
    int i,j,k;
    for(i = 0; i < strlen(str); i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					return false;
				}
 			}
		}
	}
    return true;
}
