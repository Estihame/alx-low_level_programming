#include <stdio.h>
/**
 * main - Entry point for this code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstnum, secondnum;

	for (firstnum = 0; firstnum <= 9; firstnum++)
	{
	for (secondnum = firstnum + 1; secondnum <= 9; secondnum++)
	{
	putchar('0' + firstnum);
	putchar('0' + secondnum);

	if (firstnum != 8 || secondnum != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
	putchar('\n');
	return (0);
}
