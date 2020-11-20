#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./word_stats <string of text>\n");
        return 1;
    }

    string text = argv[1];
    int letter_count = 0;

    for (int i = 0, j = strlen(text); i < j; i++)
    {
        if (isalpha(text[i]))
        {
            letter_count++;
        }
    }

    printf("Number of alphabetical characters entered: %i\n", letter_count);
    printf("Total number of characters entered: %i\n", (int) strlen(text));

    return 0;
}