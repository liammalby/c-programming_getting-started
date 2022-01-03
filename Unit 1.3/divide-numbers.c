// A program that reads a decimal number representing a temperature
// in degrees celsius and prints out the corresponding temperature in
// degrees fahrenheit with 1 decimal place.

#include <stdio.h>

int main(void)  {
    
    // Initialise variables
    double tempC = 0;
    double tempF = 0;
    
    // Scan for user input in Celsius
    scanf("%lf", &tempC);
    
    // Calculate temperature in Celsius
    tempF = tempC * 9.0/5.0 + 32.0;
    
    // Print the result
    printf("%.1lf", tempF);
    
}