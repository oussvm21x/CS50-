#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//Function included
int sentence_count(string text);
int letter_count(string text);
int word_count(string text);

//Variables
int letters = 0, words = 0, sentences = 0;
float L = 0, S = 0, G = 0;

int main(void)
{
    string text = get_string("Enter:");
    
    //assign value to letters
    letters = letter_count(text);
    
    //assign value to words
    words = word_count(text);
    
    //assign value to sentences
    sentences = sentence_count(text);

    //compute L
    L = (letters / (float)words)*100 ;

    // compute S
    S = (sentences / (float)words)*100 ;

    // compute the Grade
    G = 0.0588 * L - 0.296 * S - 15.8 ;
    G = round(G) ;
    
    //print the grade
    if(G>=1 && G<=16)
    {
        printf("Grade %i\n",(int)G);
    }
    else if (G<1)
    {
        printf("Before Grade 1\n");
    }
    else if (G>16)
    {
        printf("Grade 16+\n");
    }
    
}

int letter_count(string str)
{
    int letter = 0;
    int l = 0;
    //loop for letter in str
    for (l = 0 ; l<= strlen(str); l++)
    {
        //uppercase letter
        if(str[l] >= 97 && str[l] <= 122)
        {
        str[l] = str[l]-32;
        }

        //+1 if str[l] is an alphabet letter
        if (str[l] >= 'A' && str[l] <= 'Z')
        {
            letter++;
        }
        //+0 if str[l] is not an alphabet letter
        else
        {
            letter += 0 ;
        }
    }
    
    
    return letter;
}

int word_count(string str)
{
    int w ;
    int word = 1 ; // Words number encluding last word
    
    //loop for words
    for (w=0 ; w<= strlen(str);w++)
    {
        if(str[w] == ' ')
        {
            //increas words by 1
            word++ ;
            w++;
        }
        else
        {
            word += 0 ;
        }
    }
    return word ;
}


int sentence_count(string str)
{
    int s ;
    int sentence = 0;
    int len = strlen(str); //get the len of the text
    
    //loop for sentences
    for(s=0 ; s <= len ;s++)
    {
        //search for sentences sign
        if(str[s]=='.' || str[s]=='?' || str[s]=='!')
        {
            //Increase sentences value by 1
            sentence++;
        }
        else
        {
            sentence += 0;
        }
    }
    return sentence;
}
