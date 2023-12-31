#include <stdio.h>
#include "main.h"

/**
 * *_strncpy- Entry point of this code
 *@dest: Buffer storing string element
 *@src: Element of a String
 *@n: Bytes copied
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (src[i++])
j++;

for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = j; i < n; i++)
dest[i] = '\0';
return (dest);
}
