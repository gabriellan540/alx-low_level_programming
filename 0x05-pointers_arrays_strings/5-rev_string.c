#include "main.h"

/**
* rev_string - reverse string
* @s: string
* Return: void
*/

void rev_string(char *s)
{
int f, r;
char c;

for (f = '\0'; s[f] != 0; f++)
{
}

r = 0;

for (f = f - 1; r < f; r++)
{
c = s[f];
s[f] = s[r];
s[r] = c;
f--;
}
}
