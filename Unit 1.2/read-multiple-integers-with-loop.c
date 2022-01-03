#include <stdio.h>

int main(void)  {
    
    int i = 0;
    int enginePower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int numRobots = 0;
    int totalPower = 0;
    int robotPower = 0;
    
    scanf("%d", &numRobots);
    
    for(i = 0; i < numRobots;i++)    {
        scanf("%d %d %d %d", &height, &weight, &enginePower, &resistance);
        robotPower = (enginePower + resistance) * (weight - height);
        totalPower = totalPower + robotPower;
    }
    
    printf("%d", totalPower);
}