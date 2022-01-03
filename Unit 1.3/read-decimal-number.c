#include <stdio.h>

int main(void)  {
    
    // Declare and initialise variables
    double miles = 0;
    double km = 0;
    
    // Read user input
    scanf("%lf", &km);
    
    // Convert to miles
    miles = km * 0.621371;
    
    printf("\n%.6lf", miles);
    
    return 0;
}