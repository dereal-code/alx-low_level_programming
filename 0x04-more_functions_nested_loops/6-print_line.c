#include "main.h"

/**
 * print_line - print the character on the terminal
 * Description: prints the _ character
 * @n: number of times to print character
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
