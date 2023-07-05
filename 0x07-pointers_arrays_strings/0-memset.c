#include <stdio.h>
#include "main.h"
/**
 *_memset - copies n from memory area
 *@s: Numbers to check
 *@b: Number to input
 *@n: Lat number to input
 *Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int u;
for (u = 0; u < n; u++)
s[u] = b;
return (s);
}
