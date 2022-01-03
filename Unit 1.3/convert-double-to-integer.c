#include <stdio.h>

int main(void)  {
    
    // Declare variables
    int pop = 0;
    double perc = 0;
    
    // Read an integer representing the current population of the city
    scanf("%d\n", &pop);
    
    // Read a decimal number for the projected population growth as
    // a percentage
    scanf("%lf", &perc);
    
    // Calculate new population
    pop = pop * (1 + (perc/100));
    pop = (int) pop;
    
    // Display expected population of the city in a year as a whole number
    printf("%d", pop);

return 0;

}