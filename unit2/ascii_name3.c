#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int name_sum = 0;

    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] != ' ')
        {
            printf("%d", name[i]);
            name_sum += name[i];
            if (name[i + 1] != ' ' && i < strlen(name) - 1)
            {
                printf("-");
            }
        }
        else
        {
            printf(" ");
        }

    }

    printf(" (%d)\n", name_sum);
}