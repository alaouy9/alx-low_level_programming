#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;

	while (num < 10)
	{
		putchar(num + 48); /* 48 is the ASCII code for '0' */
		num++;
	}

	putchar('\n');

	return (0);
}
