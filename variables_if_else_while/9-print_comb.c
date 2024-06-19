#include <stdio.h>

/**
 * new - Prints numbers from 0 to 9 separated by a comma and space
 */
void new(void)
{
	int i = 0;
	char c;

	for (; i < 10; i++)
	{
		if (i > 0)
		{
			putchar(',');
			putchar(' ');
		}
		c = '0' + i;
		putchar(c);
	}
	putchar('\n'); /* To add a newline after the loop */
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	new();
	return (0);
}
