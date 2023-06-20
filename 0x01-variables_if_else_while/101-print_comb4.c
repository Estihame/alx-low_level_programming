#include <stdio.h>
/**
 * main - Entry point for this code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstnum, secondnum, thirdnum;
	for (firstnum = 0; firstnum <= 7; firstnum++)
{
	for (secondnum = firstnum + 1; secondnum <= 8; secondnum++)
{
	for (thirdnum = secondnum + 1; thirdnum <= 9; thirdnum++)
{
	putchar('0' + firstnum);
	putchar('0' + secondnum);
	putchar('0' + thirdnum);

	if (firstnum != 7 || secondnum != 8 || thirdnum != 9)
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');
	return (0);
}
