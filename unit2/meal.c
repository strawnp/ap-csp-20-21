#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numItems = get_int("How many menu items do you want to enter? ");
    printf("\n");

    float* items = malloc(sizeof(float) * numItems);

    float subtotal = 0;

    for (int i = 0; i < numItems; i++)
    {
        items[i] = get_float("Enter price #%d: ", i + 1);
        subtotal += items[i];
    }

    float tax = subtotal * 0.0875;
    float tip = subtotal * 0.18;

    printf("\nSubtotal:\t$%.2f\n", subtotal);
    printf("Tax:\t\t$%.2f\n", tax);
    printf("18%% Tip:\t$%.2f\n", tip);
    printf("---------------------\n");
    printf("Total:\t\t$%.2f\n", subtotal + tax + tip);

    free(items);

    return 0;
}