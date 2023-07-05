#include "main.h"
#include <stdio.h>

/**
 *factorial - Calls the factorial function
 *@n: The given number
 *Return: Factorial of numbers inputed
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
}
