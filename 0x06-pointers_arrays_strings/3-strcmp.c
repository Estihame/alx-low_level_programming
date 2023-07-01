#include <stdio.h>
#include "main.h"

/**
 * *_strcmp - Entry point of this code
 *@s1: Buffer storing string element
 *@s2: Element of a String
 * Return: Difference
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
