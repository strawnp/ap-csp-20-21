#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare an array to hold 5 grades
    int grades[5];
    int sum = 0;

    // get grades from the user
    for (int i = 0; i < 5; i++)
    {
        grades[i] = get_int("Enter a grade: ");
        sum += grades[i];
    }

    // display average grade
    printf("Average grade: %d\n", sum / 5);

    return 0;
}