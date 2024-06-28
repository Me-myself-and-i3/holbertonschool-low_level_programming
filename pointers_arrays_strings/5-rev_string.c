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
