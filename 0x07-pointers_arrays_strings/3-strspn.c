#include <stdio.h>
#include "main.h"
/**
 *_strspn - copies n from memory area
 *@s: Number to input
 *@accept: number to input
 *Return: null
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int u, i, v, c;
v = 0;
for (u = 0; s[u] != '\0'; u++)
{
c = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (accept[i] == s[u])
{
v++;
c = 1;
}
}
if (c == 0)
return (v);
}
return (0);
}
