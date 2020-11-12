#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    //
    string name = get_string("Enter your name: ");

    //
    for (int i = 0; i < strlen(name); i++)
    {
        //
        printf("%d", name[i]);

        //
        if (i < strlen(name) - 1)
        {
            printf("-");
        }
    }

    printf("\n");
}