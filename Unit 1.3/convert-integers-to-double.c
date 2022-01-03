#include <stdio.h>

int main(void)  {
    
    // Declare variables
    int numGrades = 0;
    int sumGrades = 0;
    int grade = 0;
    int i = 0;
    double dsumGrades = 0;
    double dnumGrades = 0;
    
    // Read an integer indicating the number of grades to be averaged
    scanf("%d", &numGrades);
    
    // Read the grades one by one, all of which are integers as well
    for(i = 0; i < numGrades; i++)  {
        
        scanf("%d\n", &grade);
        sumGrades = sumGrades + grade;
        
    }
    
    // Convert to double and calculate average
    dsumGrades = (double) sumGrades;
    dnumGrades = (double) numGrades;
    
    printf("%.2lf\n",dsumGrades/dnumGrades);

return 0;

}