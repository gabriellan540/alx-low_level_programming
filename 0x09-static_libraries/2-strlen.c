<<<<<<< HEAD
#include "main.h"

/**
* _strlen - returns length of string
* @s: strin
* Return: length of string
*/

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}

return (len);
}
=======
#include "main.h"
/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
