#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // display 1-10 using a while loop
    int x = 1;

    while (x <= 10)
    {
        printf("%d\n", x);
        x++;
    }

    // display 1-10 using a for loop
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
}
