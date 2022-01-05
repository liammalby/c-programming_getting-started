/*
You decide to bet on the final match of the Tug of War National Championship.

Prior to the match the names and weights of the players are presented,
alternating by team (team 1 player 1, team 2 player 1, team 1 player 2, and so
on). There is the same number of players on each side. You record the player
weights as they are presented and calculate a total weight_1 for each time to
inform your bet. You write a C program to assist with this.

Your program should first read an integer indicating the number of members per
team. Then, the program should read the player weights (integers representing
kilograms) alternating by team. 

After calculating the total weight_1 of each team, the program should display the
text "Team X has an advantage" (replacing X with 1 or 2 depending on which team
has a greater total weight_1).

You will then display the text "Total weight_1 for team 1:" followed by the
weight_1 of team 1, then "Total weight_1 for team 2:" followed by the weight_1 of
team 2 (see example below).

You are guaranteed that the two teams will not have the same total weight_1.

Example
Each team is composed of four players. Those of the first weigh 110, 113, 112,
and 117kg, while those of the second weigh 106, 102, 121, and 111kg. Team 1
weighs a total of 452kg whereas team 2 weighs a total of 440kg, giving team 1
an advantage.
*/

#include <stdio.h>

int main(void)
{
    // Initialise variables
    int numPlayers, totalWeight_1, totalWeight_2, i, weight_1, weight_2;
    totalWeight_1 = 0;
    totalWeight_2 = 0;
    numPlayers = 0;
    i = 0;
    weight_1 = 0;
    weight_2 = 0;

    // Read in number of players on each team
    scanf("%d", &numPlayers);

    // Read in individual player weights
    for(i = 0; i < numPlayers; i++)
    {
        scanf("%d\n%d", &weight_1, &weight_2);
        totalWeight_1 = totalWeight_1 + weight_1;
        totalWeight_2 = totalWeight_2 + weight_2;
    }

    if(totalWeight_1 > totalWeight_2)
    {
        printf("Team 1 has an advantage");
    }
    else
    {
        printf("Team 2 has an advantage");
    }

    printf("\nTotal weight for team 1: %d\nTotal weight for team 2: %d",
    totalWeight_1, totalWeight_2);

return 0;

}