#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters of given size
 * @size: The size of the triangle
 *
 * Description: This function prints a triangle made of '#' characters
 * with a base and height of 'size'. If size is less than or equal to 0,
 * it prints a newline and returns.
 */
void print_triangle(int size)
{
	/* Initialize variables for loops */
	int i, j, k;

	/* Check if size is less than or equal to 0 */
	if (size <= 0)
	{
		_putchar('\n'); /* Print a newline */
		return; /* Exit the function */
	}

	/* Loop through each row of the triangle */
	for (i = 1; i <= size; i++)
	{
		/* Print spaces to align the triangle to the right */
		for (j = 0; j < size - i; j++)
		{
			_putchar(' '); /* Print a space character */
		}

		/* Print '#' characters to form the triangle */
		for (k = 0; k < i; k++)
		{
			_putchar('#'); /* Print a '#' character */
		}

		_putchar('\n'); /* Move to the next line */
	}
}
