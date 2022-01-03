/*
This is truly horrific
At some point I should come back and rewrite this using for loops
But I just cannot be bothered doing that right now
*/

#include <stdio.h>

int main(void)  {
    
    char letter;
    
    scanf("%c", &letter);
    
    printf("++++%C++++\n", letter);
    printf("+++%C%C%C+++\n", letter, letter, letter);
    printf("++%C%C%C%C%C++\n", letter ,letter, letter, letter, letter);
    printf("+%C%C%C%C%C%C%C+\n", letter, letter, letter ,letter, letter, letter, letter);
    printf("%C%C%C%C%C%C%C%C%C\n", letter, letter, letter ,letter, letter, letter, letter, letter, letter);

return 0;
    
}