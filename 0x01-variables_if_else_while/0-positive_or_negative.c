#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);

	if (n > 0)
	{
		printf("positive");
	}
	else if (n == 0)
	{
		printf("zero");
	}
	else
	{
		printf("negative");
	}

	printf("\n");

	return (0);
}
