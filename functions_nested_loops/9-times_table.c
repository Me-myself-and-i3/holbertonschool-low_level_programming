#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description:
 * This function prints the multiplication table from 0 to 9.
 * Each row is printed with numbers separated by commas and spaces,
 * ensuring that each line aligns correctly.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			/* Print the product followed by ", " except for the last column */
			if (product < 10)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
