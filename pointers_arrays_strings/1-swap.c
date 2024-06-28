#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to the first integer.
 * @b: A pointer to the second integer.
 *
 * Description: This function takes two pointers to integers and swaps
 * the values they point to.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
