#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Computes the sum of all the multiples of 3 or 5 below 1024.
 * Prints the sum followed by a newline character.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	sum += i;
	}
	}

	printf("%d\n", sum);

	return (0);
}
