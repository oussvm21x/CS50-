#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string word);
int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if ( score1 > score2 )
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if ( score1 < score2 )
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else if ( score2 == score1 )
    else if (score2 == score1)
    {
        printf("Tie\n");
    }
@@ -38,21 +38,27 @@ int compute_score(string word)
    char letter [26] = {'A', 'B', 'C', 'D', 'E', 'F','G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int i;
    int score = 0;
    //loop in word's charecter
    for (i=0 ; i<= strlen(word); i++)
    {

        //convert character to uppercase
        if(word[i] >= 97 && word[i] <= 122)
        {
            word[i] = word[i]-32;
        }
        if (word[i] >= 'A' && word[i] <= 'Z'  )
        //Accept only alphabet charcter
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            //Point for every character

            ///letter worth 10
            if (word[i] == 'Q' || word[i] == 'Z' )
            if (word[i] == 'Q' || word[i] == 'Z')
            {
                score += 10 ;
            }
            ///letter worth 8
            else if ( word[i] == 'X' || word[i] == 'J')
            else if (word[i] == 'X' || word[i] == 'J')
            {
                score += 8 ;
            }
@@ -62,27 +68,28 @@ int compute_score(string word)
                score += 5 ;
            }
            ///letter worth 4
            else if (word[i] == 'F' || word[i] == 'V' || word[i] == 'W' || word[i] == 'Y' )
            else if (word[i] == 'F' || word[i] == 'V' || word[i] == 'W' || word[i] == 'Y')
            {
                score += 4 ;
            }
            ///letter worth 3
            else if (word[i]=='B'||word[i] == 'C' ||word[i] == 'M' ||word[i] == 'P' )
            else if (word[i]=='B'||word[i] == 'C' ||word[i] == 'M' ||word[i] == 'P')
            {
                score += 3 ;
            }
            //letter worth 2
            else if (word[i] == 'D'||word[i] == 'G')
            {
                score += 2 ;
            }
            else if ( word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'L' || word[i] == 'N' || word[i] == 'O' || word[i] == 'R' || word[i] == 'S' || word[i] == 'U' ||word[i] == 'T')
            //letter worth 1
            else if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'L' || word[i] == 'N' || word[i] == 'O' || word[i] == 'R' || word[i] == 'S' || word[i] == 'U' ||word[i] == 'T')
            {
                score += 1 ;
            }
        }


        /////////////////////
        else
        {
            score += 0;
        }
        
    }
    return score;
}
