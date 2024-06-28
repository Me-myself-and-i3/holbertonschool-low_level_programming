/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Description: This function takes a pointer to a string and prints
 * the string in reverse, followed by a new line.
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
