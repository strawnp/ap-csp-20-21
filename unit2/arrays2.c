#include <stdio.h>

#define SIZE    50

int main(void)
{
    int Fibonacci[SIZE], i;

    Fibonacci[0] = 0;
    Fibonacci[1] = 1;

    for (i = 2; i < SIZE; ++i)
    {
        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
    }

    for (i = 0; i < SIZE; ++i)
    {
        printf("%d\n", Fibonacci[i]);
    }

    return 0;
}