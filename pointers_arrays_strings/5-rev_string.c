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
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function takes a pointer to a string and reverses
 * the string in place.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
