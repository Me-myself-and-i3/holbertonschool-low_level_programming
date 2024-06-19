#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
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

int main(void)
{
	new();
	return (0);
}
