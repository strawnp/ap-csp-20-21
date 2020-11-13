#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./cli_add <num1> <num2>\n");
        return 1;
    }

    float x = atof(argv[1]);
    float y = atof(argv[2]);

    printf("%f + %f = %f\n", x, y, x + y);

    return 0;
}