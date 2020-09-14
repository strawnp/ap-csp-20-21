#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // greet the user by name
    string name;
    name = get_string("Enter your name: ");
    printf("hello, %s!\n", name);

    return 0;
}
