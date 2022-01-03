#include <stdio.h>

int main(void)  {
    
    double money = 0.0;
    double cost = 0.0;
    int books = 0;
    
    scanf("%lf\n%lf", &money, &cost);
    
    // Work out how many books you can buy
    books = money/cost;
    
    printf("%d", books);
    
}