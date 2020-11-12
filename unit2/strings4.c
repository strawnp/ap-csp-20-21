#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: implement strlen()
    string s = get_string("Enter a word: ");

    int string_length = 0;

    char c = s[string_length];

    while (c != '\0')
    {
        string_length++;
        c = s[string_length];
    }

    printf("Length of s: %d\n", string_length);

    return 0;
}