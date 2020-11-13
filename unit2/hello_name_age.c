#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./hello_name_age <first name> <age>\n");
        return 1;
    }

    int age = atoi(argv[2]);

    if (age < 0)
    {
        printf("Usage: age must be a non-negative integer.\n");
        return 2;
    }

    printf("hello, %s!\n", argv[1]);
    printf("On your next birthday, you will be %d.\n", age + 1);

    return 0;
}