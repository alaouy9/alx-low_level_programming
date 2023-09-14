#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: This function prints a message to indicate
* that an infinite loop is avoided.
*
* Return: Always 0 (Success)
*/
int main(void)
{
    int i;

    printf("Infinite loop incoming :(\n");

    i = 0;

    /*
     * Commented out the while loop to prevent an infinite loop
     * while (i < 10)
     * {
     *     putchar(i);
     * }
     */

    printf("Infinite loop avoided! \\o/\n");

    return (0);
}
