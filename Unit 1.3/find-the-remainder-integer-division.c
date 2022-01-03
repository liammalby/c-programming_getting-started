#include <stdio.h>

int main(void)  {
    
    // Declare and intialise variables
    int numMatches = 0;
    int boxSize = 0;
    int fullBoxes = 0;
    int leftovers = 0;
    
    // Scan for user input
    scanf("%d%d", &numMatches, &boxSize);
    
    // Calculate number of full boxes with remainder
    fullBoxes = numMatches/boxSize;
    leftovers = numMatches%boxSize;
    
    // Print the results
    printf("%d\n%d", fullBoxes, leftovers);
    
    return 0;
}