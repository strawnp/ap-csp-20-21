#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string("Enter your name: ");
    int name_sum = 0;

    for (int i = 0; i < strlen(name); i++)
    {
        name_sum += name[i];
    }

    printf("%d\n", name_sum);
}