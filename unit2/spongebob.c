#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./spongebob <text to meme>\n");
        return 1;
    }

    string meme_text = argv[1];
    int letter_counter = 0;

    for (int i = 0, j = strlen(meme_text); i < j; i++)
    {
        if (isalpha(meme_text[i]))
        {
            if (letter_counter % 2 == 0)
            {
                printf("%c", toupper(meme_text[i]));
            }
            else
            {
                printf("%c", tolower(meme_text[i]));
            }
            letter_counter++;
        }
        else
        {
            printf("%c", meme_text[i]);
        }
    }

    printf("\n");
}