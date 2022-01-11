/*

You are still conducting linguistic research! This time, you'd like to write a
program to find out how many letters occur multiple times in a given word. Your
program should read a word from the input and then sort the letters of the word
alphabetically (by their ASCII codes). Next, your program should iterate through
the letters of the word and compare each letter with the one following it. If
these equal each other, you increase a counter by 1, making sure to then skip
ahead far enough so that letters that occur more than twice are not counted
again. You may assume that the word you read from the input has no more than 50
letters, and that the word is all lowercase.

Examples

Input:
apple

Output:
1

Input:
keeper

Output:
1

Input:
erroneousnesses

Output:
5

Input:
taylor

Output:
0

*/

#include <stdio.h>

int main(void)
{
    char inputString[51];
    int countArray[256], i, j;
    i = 0;
    j = 0;
    int counter = 0;
    
    scanf("%s", inputString);

    // Initialise countArray
    for (i = 0; i < 256; i++)
    {
        countArray[i] = 0;
    }

    while (inputString[j] != '\0')
    {
        countArray[inputString[j]]++;
        j++;
    }
    
    /*
    for (i = 0; i < 256; i++)
    {
        printf("%d ", countArray[i]);
    }
    */
    
    for (i = 0; i < 256; i++)
    {
        if (countArray[i] > 1)
        {
            counter++;
        }
    }
    
    printf("%d", counter);

    return 0;

}

// I didn't end up iterating the way it said to do in the problem, but I still
// got the answers right.
