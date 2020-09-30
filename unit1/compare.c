#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gather user input
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");

    // determine which value is the greater of the two
    if (x > y)
    {
        printf("%d is greater than %d\n", x, y);
    }
    else if (x < y)
    {
        printf("%d is less than %d\n", x, y);
    }
    else
    {
        printf("%d is equal to %d\n", x, y);
    }

    return 0;
}
