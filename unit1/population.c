#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int startSize;
    do
    {
        startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // Prompt for end size
    int endSize;
    do
    {
        endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // Calculate number of years until we reach threshold
    int numYears = 0;

    while (startSize < endSize)
    {
        int newLlamas = startSize / 3;
        int ripLlamas = startSize / 4;
        // startSize = startSize + newLlamas - ripLlamas;
        startSize += newLlamas - ripLlamas;                     // compound assignment
        // numYears = numYears + 1;
        // numYears += 1;
        numYears++;                                             // increment operator
        // printf("DEBUG - Updated population: %d\n", startSize);
    }

    // Print number of years
    printf("Years: %d\n", numYears);
}
