#include "main.h"

/**
 * print_most_numbers - print num except 2 and 4
 * return: void
 */

void print_most_numbers(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
	{
		if (!(s == '2' || s == '4'))
			_putchar(s);
	}
	_putchar('\n');
}
