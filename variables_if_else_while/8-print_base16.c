#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints hexadecimal numbers from 0 to f using putchar.
 * Only the putchar function is used, and only twice in the code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	/* Loop through the range of decimal digits from 0 to 9 */
	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	/* Loop through the range of hexadecimal digits from 'a' to 'f' */
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}
