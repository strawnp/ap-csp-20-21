#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Enter a word or phrase or sentence: ");

    int string_length = 0;

    char c = s[string_length];

    while (c != '\0')
    {
        string_length++;
        c = s[string_length];
    }

    printf("Length of s: %d\n", string_length);
}