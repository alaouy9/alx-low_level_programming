#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = 0;

    while (num <= 9)
    {
        putchar(num + '0'); /* Print the current digit */

        if (num < 9)
        {
            putchar(','); /* Print a comma if it's not the last digit */
            putchar(' '); /* Print a space */
        }

        num++;
    }

    putchar('\n');

    return (0);
}
