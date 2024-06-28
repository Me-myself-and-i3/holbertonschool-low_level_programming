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
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be printed.
 *
 * Description: This function takes a pointer to a string and prints
 * the second half of the string. If the number of characters is odd,
 * it prints the last (length_of_the_string - 1) / 2 characters.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
