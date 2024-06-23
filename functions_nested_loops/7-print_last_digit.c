#include "main.h"

/**
 * print_last_digit - prints the last digit of a number and returns its value
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;  /* Calculate the last digit */

	if (last_digit < 0)    /* Handle negative numbers */
		last_digit = -last_digit;

	_putchar(last_digit + '0');  /* Print the last digit */
	return (last_digit);           /* Return the last digit value */
}
