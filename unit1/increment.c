#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // display 10-100 by tens using a while loop
    int x = 10;

    while (x <= 100)
    {
        printf("%d\n", x);
        x += 10;
    }

    // display 10-100 by tens using a for loop
    for (int i = 10; i <= 100; i += 10)
    {
        printf("%d\n", i);
    }
}
