#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get two integers from the user
    int num1 = get_int("Enter a number: ");
    int num2 = get_int("Enter another number: ");

    // perform the five mathematical operations on these numbers and display the results
    printf("%d + %d = %d\n", num1, num2, num1 + num2);              // addition
    printf("%d - %d = %d\n", num1, num2, num1 - num2);              // subtraction
    printf("%d * %d = %d\n", num1, num2, num1 * num2);              // multiplication
    printf("%d / %d = %d\n", num1, num2, num1 / num2);              // integer division -> quotient
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);             // modulus -> remainder
    printf("%d / %d = %f\n", num1, num2, (float) num1 / num2);      // floating-point division
    
    return 0;
}
