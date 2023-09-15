#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0'); /* Print the current digit */

		if (num < 9) /* Add a comma and space for all digits except 9 */
		{
			putchar(', ');
		}

		num++;
	}

	putchar('\n'); /* Print a newline character at the end */

	return (0);
}
