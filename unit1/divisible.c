#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // gather user input
    int x = get_int("Enter a number: ");
    int y = get_int("Enter another number: ");

    // determine remainder
    int remainder = x % y;

    // display results of divisiblity
    if (remainder == 0)
    {
        printf("%d is evenly divisible by %d\n", x, y);
    }
    else
    {
        printf("%d is not evenly divisible by %d\n", x, y);
    }

    return 0;
}
