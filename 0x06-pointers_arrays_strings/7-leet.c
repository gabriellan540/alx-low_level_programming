#include "main.h"

/**
* leet - encodes a string into 1337
* @s: input string
* Return: the pointer to dest
*/

char *leet(char *s)
{
int num = 0, a;
int lower[] = {97, 101, 111, 116, 108};
int upper[] = {65, 69, 79, 84, 76};
int numbers[] = {52, 51, 48, 55, 49};

while (*(s + num) != '\0')
{

for (a = 0; a < 5; a++)
{
if (*(s + num) == lower[a] || *(s + num) == upper[a])
{
*(s + num) = numbers[a];
break;
}
}
num++;
}
return (s);
}
