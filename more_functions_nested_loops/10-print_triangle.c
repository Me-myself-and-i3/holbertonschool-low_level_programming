#include <main.h>

/**
 * putchar - writes the character c to stdout
 * The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/**
 * print_triangle - prints a triangle of '#' characters of given size
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
    int i, j, k;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 1; i <= size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            _putchar(' ');
        }
        for (k = 0; k < i; k++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
