#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry pint for code
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}
_putchar('\n');
}
