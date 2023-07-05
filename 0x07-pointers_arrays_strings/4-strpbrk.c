#include <stdio.h>
#include "main.h"
/**
 *_strpbrk - copies n from memory area
 *@s: Number to input
 *@accept: number to input
 *Return: null
 */
char *_strpbrk(char *s, char *accept)
{
int u, m;
for (u = 0; s[u] != '\0'; u++)
{
for (m = 0; accept[m] != '\0'; m++)
{
if (s[u] == accept[m])
return (s + u);
}
}
return (NULL);
}
