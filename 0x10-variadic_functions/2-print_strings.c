#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings-Function to Prints strings.
 *@separator: The string printed between numbers.
 *@n: The number of integers passed to the function.
 *@...: A variable number of numbers to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list dig;
	char *str;
	unsigned int i;

	va_start(dig, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(dig, char*);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(dig);
}
