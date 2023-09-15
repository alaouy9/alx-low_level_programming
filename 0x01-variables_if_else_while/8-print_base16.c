#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0'); /* Print digits 0-9 */
		num++;
	}

	letter = 'a';
	while (letter <= 'f')
	{
		putchar(letter); /* Print letters a-f */
		letter++;
	}

	putchar('\n');

	return (0);
}
