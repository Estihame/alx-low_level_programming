#include <stdio.h>
#include "main.h"
/**
 *_strchr - copies n from memory area
 *@s: Number to input
 *@c: Lat number to input
 *Return: null
 */
char *_strchr(char *s, char c)
{
int u;
for (u = 0; s[u] >= '\0'; u++)
{
if (s[u] == c)
return (s + u);
}
return (NULL);
}
