// I very much struggled with this one.

#include <stdio.h>

int main()  {
    
    // define the variables
    int i = 0;
    int timesTable = 8;
    int timesBy = 0;
    
    // write the for loop
    for(i=0; i<11; i++) {
        printf("%dx%d = %d\n",timesBy,timesTable,timesBy*timesTable);
        timesBy = timesBy + 1;
    }
}