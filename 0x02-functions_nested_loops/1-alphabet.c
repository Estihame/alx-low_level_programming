#include <stdio.h>
#include "main.h"
/**
 * main - print_alphabet(void)
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alphabet;

    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
	_putchar(alphabet);
    }
    
	_putchar('\n');
}
