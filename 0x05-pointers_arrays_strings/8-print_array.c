#include <stdio.h>
#include "main.h"
/**
 *print_array - prints elements of an array of integers and a new line.
 *@a: Elements of an array
 *@n: Element of an array
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
printf(", ");
}
printf("\n");
}
