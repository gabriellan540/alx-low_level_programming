<<<<<<< HEAD
#include "main.h"

/**
* _puts - prints string
* @str: string
* Return: void
*/

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
=======
#include "main.h"
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
