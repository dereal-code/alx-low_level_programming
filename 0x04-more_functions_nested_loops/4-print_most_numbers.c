#include "main.h"

/**
 * print_most_numbers - prints 0-9
 */
void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
			continue;
		_putchar(x);
	}
	_putchar('\n');
}
