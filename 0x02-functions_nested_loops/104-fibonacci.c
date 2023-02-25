#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program computes and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2.
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	int i;
	long j = 1, k = 2, next;

	printf("%ld, %ld", j, k);

	for (i = 2; i < 98; i++)
	{
	next = j + k;
	printf(", %ld", next);
	j = k;
	k = next;
	}
	printf("\n");

	return (0);
}
