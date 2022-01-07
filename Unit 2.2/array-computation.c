/*
You plan to make a delicious meal and want to take the money you need to buy the
ingredients. Fortunately you know in advance the price per pound of each
ingredient as well as the exact amount you need. The program should read in the
number of ingredients (up to a maximum of 10 ingredients), then for each
ingredient the price per pound. Finally your program should read the weight
necessary for the recipe (for each ingredient in the same order). Your program
should calculate the total cost of these purchases, then display it with 6
decimal places.

Example
There are 4 ingredients and they all have a different price per pound: 9.90,
5.50, 12.0, and 15.0. You must take 0.25 lbs of the first, 1.5 lbs of the
second, 0.3 lbs of the third and 1 lb of the fourth. It will cost exactly
$29.325000.

Input:
4
9.90 5.50 12.0 15.0
0.250 1.5 0.300 1.0

Output:
29.325000
*/

#include <stdio.h>

int main(void)
{
    // Declare and initialise variables
    int i, numIg;
    i = 0;
    numIg = 0;
    double sum;
    sum =0;
    
    // Declare and initialise array
    double prices[10];
    double weights[10];

    scanf("%d\n", &numIg);

    for(i = 0; i < numIg; i++)
    {
        scanf("%lf ", &prices[i]);
    }

    for (i = 0; i < numIg; i++)
    {
        scanf("%lf ", &weights[i]);
    }
    
    for (i = 0; i < numIg; i++)
    {
        sum = sum + prices[i] * weights[i];
    }
    
    printf("%lf", sum);

    return 0;

}