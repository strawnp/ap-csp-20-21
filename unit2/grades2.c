#include <cs50.h>
#include <stdio.h>

#define NUM_GRADES  5

int main(void)
{
    // declare an array to hold 5 grades
    int grades[NUM_GRADES];
    int sum = 0;

    // get grades from the user
    for (int i = 0; i < NUM_GRADES; i++)
    {
        grades[i] = get_int("Enter a grade: ");
        sum += grades[i];
    }

    // display average grade
    printf("Average grade: %d\n", sum / NUM_GRADES);

    return 0;
}