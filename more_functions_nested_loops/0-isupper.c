#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character to check
 *
 * Description: This function checks if the input character is an uppercase
 * letter. If the character is an uppercase letter, it returns 1, otherwise,
 * it returns 0.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
