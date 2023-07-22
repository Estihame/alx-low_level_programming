#include <stdarg.h>
#include <stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list dig;
	unsigned int i;
	va_start(dig, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(dig, int));
		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(dig);
}
