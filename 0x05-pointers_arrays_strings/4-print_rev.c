#include "main.h"
#include <stdio.h>
/**
 *print_rev - Prints characters in reverse order
 *len: Used as a place holder for characters
 *@s: single character defined in print rev function
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
	len++;
	while (len--)
	{
	_putchar(s[len]);
	}
	_putchar('\n');
}
