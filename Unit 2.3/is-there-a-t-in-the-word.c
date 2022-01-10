/*

You are conducting a linguistic study and are interested in finding words that
contain the letter 't' or 'T' in the first half of the word (including the
middle letter if there is one). Specifically, if the first half of the word does
contain a 't' or a 'T', your program should output a 1. If the first half does
not contain the letter 't' or 'T', but the second half does, then your program
should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your
program's output should be -1. You may assume that the word entered does not
have more than 50 letters.

Examples

Input:
apple

Output:
-1
 
Input:
raincoat

Output:
2

Input:
enter

Output:
1

Input:
Taylor

Output:
1

*/

#include <stdio.h>

int main(void)
{
    
    char word[51];
    int index, i, len, j, firstHalf, secondHalf;
    index = 0;
    j = 0;
    i = 0;
    len = 0;
    firstHalf = 0;
    secondHalf = 0;
    
    scanf("%s", word);

    // Find the length of the word
    while (word[i] != '\0')
    {
        len++;
        i++;
    }

    // Go through each letter in the word
    for (j = 0; j < len; j++)
    {
        index = j + 1; // Sets the index position starting from 1
        if (word[j] == 't' || word[j] == 'T')
                {
            if (len/index > 1)
            {
                firstHalf = 1;
            }
            else if (len/index == 1)
            {
                secondHalf = 1;
            }            
        }
    }  
    
    if (firstHalf)
    {
        printf("1");
    }
    else if (secondHalf)
    {
        printf("2");
    }
    else if (!firstHalf && !secondHalf)
    {
        printf("-1");
    }
    
    return 0;
}


// This one took a while to get too, but damn it felt good.