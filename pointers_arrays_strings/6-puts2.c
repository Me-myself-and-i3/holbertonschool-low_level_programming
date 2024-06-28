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
 * the string in place, using a step size of 2.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp;

	/* Swap elements with step size of 2, ensure not to go out of bounds */
	for (i = 0; i < len / 2; i += 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;

		/* If len - 1 - i is out of bounds, break early */
		if (len - 1 - (i + 2) < i + 2)
		{
			break;
		}

		/* Check and swap the next pair if within bounds */
		if (i + 1 < len / 2 && len - 1 - (i + 1) > i + 1)
		{
			temp = s[i + 1];
			s[i + 1] = s[len - 1 - (i + 1)];
			s[len - 1 - (i + 1)] = temp;
		}
	}
}
