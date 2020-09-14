#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // greet the user by name and wish them happy birthday
    string name = get_string("Enter your name: ");
    int age = get_int("Enter your age: ");

    printf("hello, %s! On your next birthday, you will be %i.\n", name, age + 1);

    return 0;
}
