#include "main.h"
/**
 *_atoi - Convert a string to integer.
 *@s: String to convert
 *Return: Pointer dest
 */
int _atoi(char *s)
{
int a = 0;
int c = 0;
int min = 1;
while ((s[a] < '0' || s[a] > '9') && s[a] != 0)
{
if (s[a] == '-')
min *= -1;
a++;
}
while ((s[a] >= '0' && s[a] <= '9') && s[a] != 0)
{
if (c >= 0)
{
c = c * 10 - (s[a] - '0');
a++;
}
else
{
c = c * 10 - (s[a] - '0');
a++;
}
}
min *= -1;
return (c *min);
}
