#include <stdio.h>
/**
 * main - Entry point for this code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int printcombo;

	for (printcombo = 0; printcombo <= 9; printcombo++)
	{
	putchar('0' + printcombo);
	if (printcombo != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
