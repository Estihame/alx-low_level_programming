#include <stdio.h>
#include "main.h"

/**
 * *_strncat- Entry point of this code
 *@n: Bytes from src to be appended to dest
 *@dest: Element of a string
 *@src: Append to dest
 * Return: - Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i++])
j++;
for (i = 0; src[i] && i < n; i++)
dest[j++] = src[i];
return (dest);
}
