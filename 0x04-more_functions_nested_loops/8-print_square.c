#include "main.h"

/**
 * print_square - print square
 * @size: the square size
 * Return: void
 */
void print_square(int size)
{
	int n, j;

	if (size > 0)
	{
		for (n = 1; n <= size; n++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			if (n == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
