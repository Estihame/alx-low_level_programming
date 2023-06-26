#include "main.h"
#include <stdio.h>
/**
 *_puts - This function prints a string followed by a new line
 *@str: contains string words
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
