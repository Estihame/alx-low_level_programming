#include <stdio.h>
#include "main.h"
/**
 *puts_half -  prints half of a string, followed by a new line
 *@str: Points to string to print
 *
 */
void puts_half(char *str)
{
int length;
int n;
int i;
length = 0;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
for (i = length / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (length % 2)
{
for (n = (length - 1) / 2; n < length - 1; i++)
{
_putchar(str[n + 1]);
}
}
_putchar('\n');
}
