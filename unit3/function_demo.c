#include <cs50.h>
#include <stdio.h>

int add_two_numbers(int, int);

int main(void)
{
    int num1 = get_int("Num 1: ");
    int num2 = get_int("Num 2: ");
    int sum = add_two_numbers(num1, num2);
    printf("%d + %d = %d\n", num1, num2, sum);
}

int add_two_numbers(int x, int y)
{
    return x + y;
}