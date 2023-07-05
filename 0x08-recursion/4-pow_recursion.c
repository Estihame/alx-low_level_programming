#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - Holds variable x and y
 *@x: Variable of x
 *@y: Variable of y
 * Return: x raised to the poer y.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
}
