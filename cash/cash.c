#include <stdio.h>
#include <math.h>
#include "cs50.h"

void main() 
{
    float dollars;
    int coins = 0;

    do
    {
      dollars = get_float("Dollars: ");
    } while (dollars <= 0.1);

    int cents = round(dollars * 100);

    while (cents >= 25) {
        cents -= 25;
        coins++;
    }
    while (cents >= 10) {
        cents -= 10;
        coins++;
    }
    while (cents >= 5) {
        cents -= 5;
        coins++;
    }
    while (cents >= 1) {
        cents -= 1;
        coins++;
    }

    printf("Coins: %i\n", coins);
    
}