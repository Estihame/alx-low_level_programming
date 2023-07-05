#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - Main Function
 *@s: Message to display
 *Return: O
 */
int _strlen_recursion(char *s)
{
int length;
if (*s == '\0')
{
return (0);
}
length = _strlen_recursion(s + 1);
return (1 + length);
}
