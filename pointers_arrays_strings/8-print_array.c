#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements to be printed.
 *
 * Description: This function prints n elements of an array of integers,
 * numbers must be separated by a comma and a space, and displayed in the
 * same order as they are stored in the array.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
