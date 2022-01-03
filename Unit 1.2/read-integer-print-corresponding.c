// Probably not the most elegant way to do this.

#include <stdio.h>

int main() {
    // Declare variables
    int timesTable = 0;
    int timesBy = 0;
    int i = 0;
    
    // Ask the user for an input variable
    scanf("%d", &timesTable);

    // Multiply the user input by 0 through 10
    for(i = 0; i < 11; i++) {
        printf("%dx%d = %d\n", timesBy, timesTable, timesTable * timesBy);
        timesBy = timesBy + 1;
    }
    
    return 0;
}