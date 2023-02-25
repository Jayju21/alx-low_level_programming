#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int prev = 1, curr = 2, next;
	long sum = 2; /* start with sum = 2, since the first even term is 2 */

	while (curr <= 4000000)
	{
	next = prev + curr;
	if (next % 2 == 0)
	{
	sum += next;
	}
	prev = curr;
	curr = next;
	}

	printf("%ld\n", sum);

	return (0);
}
