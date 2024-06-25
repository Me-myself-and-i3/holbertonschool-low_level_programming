#include <stdio.h>

/**
 * print_triangle - prints a triangle of '#' characters of given size
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
