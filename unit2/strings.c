#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // a char array != a string
    char letters[] = { 'A', 'B', 'C' };
    printf("%s\n", letters);

    // a string == a char array that ends with '\0' (null terminator)
    char more_letters[] = "ABC";
    // char more_letters[] = { 'A', 'B', 'C', '\0' };
    printf("%s\n", more_letters);

    // char letters[] = { 'A', 'B', 'C' };
    // printf("%s\n", letters);

    string yet_more_letters = "qwerty";
    printf("%s\n", yet_more_letters);

    char* somehow_more_letters = "wasd";
    printf("%s\n", somehow_more_letters);
}