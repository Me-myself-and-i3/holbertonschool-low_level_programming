#include "main.h"

/**
 * _puts - Prints a string to stdout, followed by a new line.
 * @str: The string to print.
 *
 * Description: This function takes a pointer to a string and prints
 * the string to stdout, followed by a new line.
 *
 * Return: void
 */
void _puts(char *str)
{
	int x = _strlen(str);
	int i = 0;

	for (; i < x; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
