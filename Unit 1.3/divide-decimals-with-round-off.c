#include <stdio.h>

int main(void)  {
    
    double cement = 0.0;
    double bags = 0;
    int intbags = 0;
    int cost = 0;
    
    scanf("%lf", &cement);
    
    bags = cement/120.0;
    intbags = (int) bags;
    intbags = intbags + 1;
    cost = intbags * 45;
    
    printf("%d", cost);
    
    return 0;
}