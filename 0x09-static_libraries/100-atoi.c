<<<<<<< HEAD
#include "main.h"

/**
* _atoi - converts a string to an integer.
* @s: input string.
* Return: integer.
*/

int _atoi(char *s)
{
=======
/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/
int _atoi(char *s)
{
int i = 1;
unsigned int num = 0;
do {
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *i);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
