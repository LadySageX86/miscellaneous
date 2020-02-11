// kopimi
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    float discountMultiplier = 1 - (strtod(argv[1], NULL)/100);
    float amountDiscounted;
 
    while (1 == 1)
    {
        printf("\nEnter the amount you are discounting: ");
        scanf("%f", &amountDiscounted);

        float total = amountDiscounted * discountMultiplier;
        printf("\nTotal discount: %.2f", total);
    }    
    return 0;
}
