/*

The goal of this problem is to find the smallest integer in a list of numbers.

To help you with this task, please write a function called min() that finds and
returns the smallest amongst two integers (be sure to also write a prototype for
this function). The function thus takes two integers as input and returns the
smallest of the two. This function will use an if statement with a condition
that contains either "less than" or "greater than".

Next, please use min() in your main function to work your way through an entire
list of numbers in order to find its minimum. The first number you read gives
the number of elements in the list of integers under consideration. You will
then read the integer values, using min() to keep only the smallest integer
read at each step. In the end, please print out the smallest integer in the
list.

Example

Input
10
4 3 6 2 6 8 9 8 5 4

Output
2
*/
#include <stdio.h>

// Prototype
int min(int, int);

// Main function
int main(void)
{
    int total, element1, element2, i, smaller;
    total = 0;
    smaller = 0;
    element1 = 0;
    element2 = 0;
    i = 0;

    scanf("%d\n", &total);

    scanf("%d %d", &element1, &element2);
    smaller = min(element1, element2);
    for (i = 2; i < total; i++)
    {
        scanf("%d ", &element1);
        smaller = min(element1, smaller);
    }
    
    
    printf("%d", smaller);

    return 0;

}

// Write the function 'min'
int min(int num1, int num2)
{
    if (num1 < num2)
    {
        return num1;
    }
    else if (num2 < num1)
    {
        return num2;
    }    
}
