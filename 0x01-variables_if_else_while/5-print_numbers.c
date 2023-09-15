#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers in base 10, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    num = 0;

    while (num <= 9)
    {
        putchar(num + '0'); /* Convert the integer to its character representation */
        num++;
    }

    putchar('\n');

    return (0);
}
