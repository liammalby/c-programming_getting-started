/*

Your job is to find the length of the longest word in a text with no punctuation
or special characters of any kind - only contains words. To do so, please write
a C-program that takes as an input first the number of words in a text, followed
by all of the words in the text. The output of your program should be the length
of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed
100 characters. 

Examples

Input:
14
This is a simple example text
we have to find the largest word length

Output:
7

Input:
7
All cats are grey in the dark

Output:
4

*/

#include <stdio.h>

int main(void){

    // Variables
    int nbWords = 0;
    char word[101];
    int i = 0;
    int j = 0;
    int len = 0;
    int index = 0;

    // Code
    scanf("%d\n", &nbWords); // User integer input defines number of words
    for (i = 0; i <= nbWords; i++) // For each word
    {
        scanf("%s ", word); // Stores the word in the array 'word'
        len = 0;
        j = 0;
        while (word[j] != '\0')
        {
            len++;
            j++;
        }
        if (len > index)
        {
            index = len;
        }
    }
    printf("%d", index);
    
    return 0;

}

/*

OH MY GOD... this took me a long, long time to get this done. It was horrible,
and I feel like by the end I got it purely by accident. I went through a few
iterations of this, but as it turns out it's relatively simple.

Thanks for listening to my story.
*/
