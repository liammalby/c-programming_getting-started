/*

Please write a C-program that uses a recursive function called "sumOfDigits()"
to compute the sum of the digits of a number. To do so, your main function
should first read an integer number as input and then call sumOfDigits(), which
should in turn call itself until there are no digits left to sum, at which point
the final sum should display to the user.

Here is the main idea of how the recursion in sumOfDigits() should work:

sumOfDigits(6452) = 2 + sumOfDigits(645)

sumOfDigits(645) = 5 + sumOfDigits(64)

...

sumOfDigits(6) = 6

Examples

Input
47253

Output
21
 
Input
643

Output
13

*/

#include <stdio.h>

// Prototype
int sumOfDigits(int);

// Main function
int main(void)
{
    int input = 0;
    int sum = 0;

    scanf("%d", &input);
    sum = sumOfDigits(input);
    printf("%d", sum);

    return 0;
}

// Recursive function sumOfDigits
int sumOfDigits(int n)
{
    int result = 0;
    if (n < 10)
    {
        return n + result;
    }
    else
    {
    result = n%10 + sumOfDigits(n/10);
    return result;
    }

}

// Solved with a little help from my friend who shall remain nameless.
