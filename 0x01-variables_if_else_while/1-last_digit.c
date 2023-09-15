#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    srand(time(NULL)); // Initialize the random number generator

    n = rand(); // Assign a random number to n
    printf("Last digit of %d is ", n);

    // Extract the last digit of n
    int lastDigit = n % 10;

    // Check the value of the last digit
    if (lastDigit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}
