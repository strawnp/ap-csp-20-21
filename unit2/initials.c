#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("");

    printf("%c", toupper(name[0]));

    for (int i = 1, j = strlen(name); i < j; i++)
    {
        if (isspace(name[i]))
        {
            printf("%c", toupper(name[i + 1]));
        }
    }

    printf("\n");
}