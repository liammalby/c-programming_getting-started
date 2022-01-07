/*
Create a program that displays on the screen a square of n x n stars, with the
integer n given as an input.

Examples

Input:
5

Output:
*****
*****
*****
*****
*****
 

Input:
3

Output:
***
***
***

*/

#include <stdio.h>

int main(void)
{
    int size = 0;
    int i = 0;
    int j = 0;

    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
        printf("*");
        }
    printf("\n");
    j = 0;
    }

    return 0;

}