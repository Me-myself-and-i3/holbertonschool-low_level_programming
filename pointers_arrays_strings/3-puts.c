#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Description: This function takes a pointer to a string and returns
 * the length of the string, excluding the null terminator.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

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
