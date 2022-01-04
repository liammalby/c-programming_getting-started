#include <stdio.h>

int main(void)  {
    
    // Define and initialise variables
    int numPass = 0;
    double fuelPrice = 0;
    double totalPrice = 0;
    
    scanf("%d %lf", &numPass, &fuelPrice);
    
    if (numPass == 0)
    {
        printf("%.2lf", fuelPrice);
    } else {
        totalPrice = 1 + fuelPrice;
        numPass = numPass + 1;
        totalPrice = totalPrice/numPass;
        printf("%.2lf", totalPrice);
    }
    
    return 0;
    
}