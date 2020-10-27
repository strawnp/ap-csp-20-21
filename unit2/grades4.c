#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // prompt user for number of grades to enter
    int numGrades = get_int("How many grades do you want to enter? ");
    printf("\n");

    // reserve enough bytes to store the number of integers requested above
    // malloc() == "memory allocation" (found in stdlib.h)
    // used for dynamic memory allocation, i.e. when we learn at run time,
    // rather than compile time, how large an array will be
    // malloc() expects as an argument the number of bytes to reserve
    // sizeof() returns numbers of bytes used for that data type
    int* grades = malloc(sizeof(int) * numGrades);

    float sum = 0;

    // get grades from the user
    for (int i = 0; i < numGrades; i++)
    {
        grades[i] = get_int("Enter grade #%d: ", i + 1);
        sum += grades[i];
    }

    // display average grade
    printf("\nAverage grade: %.2f\n", sum / numGrades);

    // free memory
    // a call to free() should always end a program that uses malloc()
    free(grades);

    return 0;
}