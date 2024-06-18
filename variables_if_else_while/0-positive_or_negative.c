#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number and checks if it is
 * positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0)); /* Seed the random number generator */
	n = rand();     /* Generate a random number */

	if (n < 0)
	{
		printf("is negative\n");
	}
	else if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		printf("is zero\n");
	}

	return (0);
}
