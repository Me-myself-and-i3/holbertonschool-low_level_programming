#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
void new(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		printf("%d, ", i);
	}
	printf("\n"); /* To add a newline after the loop */
}

int main(void)
{
	new();
	return (0);
}
