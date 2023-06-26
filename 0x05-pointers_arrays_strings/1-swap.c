#include "main.h"
#include <stdio.h>
/**
 * swap_int - This function swaps the values of two integers
 *
 * parameter a: Variable to swap integers
 *
 * 'b' - Second variable to swap integers
 *
 * swap - Keeps the variable temporarily in order to switch between integers
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)

{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
