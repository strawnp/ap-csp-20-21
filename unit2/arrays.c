#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // method 1: declare the size and use an initializer list
    int nums[3] = {3, 1, 4};

    // method 2: use an initializer list without declaring the size
    // size gets automatically calculated based on length of initializer list
    int moreNums[] = {3, 1, 4, 1, 5, 9};

    // method 3: declare array and initialize separately
    // recall the last value to assign to is [size - 1]
    int yetMoreNums[4];
    yetMoreNums[0] = 42;
    yetMoreNums[1] = 77;
    yetMoreNums[2] = 83;
    yetMoreNums[3] = 24;

    // note: all arrays are of fixed size -> once declared, they cannot grow or shrink
}