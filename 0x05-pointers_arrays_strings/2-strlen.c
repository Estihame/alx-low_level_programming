#include "main.h"
#include  <stdio.h>
/**
 *_strlen - Prints the length of a string
 *@s: return value of len
 *len: Counts length of string
 *Return: Return i
 */

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
