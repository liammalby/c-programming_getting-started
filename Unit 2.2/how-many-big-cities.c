/*
You want to determine the number of cities in a given region that have a
population strictly greater than 10,000. To do this, you write a program that
first reads the number of cities in a region as an integer, and then the
populations for each city one by one (also integers).

Example

Input
6
1000
5000
15000
4780
0
23590

Output
2

*/

#include <stdio.h>

int main(void)
{
    int numCities, pop, largeCities, i;
    numCities = 0;
    pop = 0;
    largeCities = 0;
    i =0;

    scanf("%d", &numCities);

    for (i = 0; i < numCities; i++)
    {
        scanf("%d\n", &pop);
        if (pop > 10000)
        {
            largeCities = largeCities + 1;
        }
        
    }
    
    printf("%d", largeCities);

    return 0;

}