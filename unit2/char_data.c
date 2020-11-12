#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char letter = get_char("Enter a letter: ");

    printf("%d\n", letter);

    if (letter < 65 || (letter > 90 && letter < 97) || letter > 122)
    {
        printf("Non-alphabetical\n");
    }
    else if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' &&
        letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U')
    {
        printf("Consonant\n");
    }
    else
    {
        printf("Vowel\n");
    }

    if (letter >= 65 && letter <= 90)
    {
        printf("Uppercase\n");
        printf("%c\n", letter + 32);
    }
    else if (letter >= 97 && letter <= 122)
    {
        printf("Lowercase\n");
        printf("%c\n", letter - 32);
    }
    else
    {
        printf("Non-alphabetical\n");
    }
}