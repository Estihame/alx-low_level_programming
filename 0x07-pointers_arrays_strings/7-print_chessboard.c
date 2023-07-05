#include <stdio.h>
#include "main.h"
/**
 *print_chessboard - copies n from memory area
 *@a: Number to input
 *Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
int u, m;
for (u = 0; u < 8; u++)
{
for (m = 0; m < 8; m++)
_putchar(a[u][m]);
_putchar('\n');
}
}

