#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./spongebob <text to meme>\n");
        return 1;
    }

    srand(time(NULL));

    string meme_text = argv[1];

    for (int i = 0, j = strlen(meme_text); i < j; i++)
    {
        if (isalpha(meme_text[i]))
        {
            int random_number = rand();
            if (random_number % 2 == 0)
            {
                printf("%c", toupper(meme_text[i]));
            }
            else
            {
                printf("%c", tolower(meme_text[i]));
            }
        }
        else
        {
            printf("%c", meme_text[i]);
        }
    }

    printf("\n");
}