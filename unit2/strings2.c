#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string word = get_string("Enter a word: ");

    printf("%s\n", word);

    for (int i = 0; i < strlen(word); i++)
    {
        // printf("%c\n", word[i]);
        printf("%c (%d)\n", word[i], word[i]);
    }
}