#include <stdio.h>
#include "main.h"
/**
 *rev_string - Reverse a string
 *@s: Reverse string
 *
 */
void rev_string(char *s)
{
int i = 0;
int max = 0;
char var;

while (*(s + i) != '\0')
i += 1;
i -= 1;
while (max < i)
{
var = s[i];
s[i] = s[max];
s[max] = var;
max++;
i--;
}
}
