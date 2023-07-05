#include <stdio.h>
#include "main.h"
/**
 *_strstr - copies n from memory area
 *@haystack: Number to input
 *@needle: number to input
 *Return: null
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *une = haystack;
char *duo = needle;
while (*une == *duo && *duo != '\0')
{
une++;
duo++;
}
if (*duo == '\0')
return (haystack);
}
return (NULL);
}
