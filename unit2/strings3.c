#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num;

    do
    {
        num = get_int("Enter a valid ASCII number: ");
    }
    while (num < 0 || num > 127);

    printf("The ASCII character for %d is %c.\n\n", num, num);

    printf("# of bytes used for int: %lu\n", sizeof(int));
    printf("# of bytes used for char: %lu\n", sizeof(char));
}