#include <stdio.h>
#include "main.h"
/**
 *_memcpy - copies n from memory area
 *@dest: Numbers to check
 *@src: Number to input
 *@n: Lat number to input
 *Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int u;
for (u = 0; u < n; u++)
dest[u] = src[u];
return (dest);
}
