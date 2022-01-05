#include <stdio.h>

int main(void  )    {

    int hoursPast = 0;
    int totalPrice = 0;

    scanf("%d", &hoursPast);

    // If you arrive at noon it will cost $10.
    // However, if you arrive hoursPast past noon,
    // $5 is added to the total.

    totalPrice = 10 + hoursPast * 5;

    if(totalPrice > 53)
    {
        totalPrice = 53;
    }
    else
    {
        totalPrice = totalPrice;
    }

    printf("%d\n", totalPrice);

    return 0;

}