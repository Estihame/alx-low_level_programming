#include <stdio.h>
/**
 * main - Entry point for this code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char basesixteen;

	for (basesixteen = '0'; basesixteen <= '9'; basesixteen++)
{
	putchar(basesixteen);
}
	for (basesixteen = 'a'; basesixteen <= 'f'; basesixteen++)
{
	putchar(basesixteen);
}
	putchar('\n');
	return (0);
}
