<<<<<<< HEAD
#include "main.h"

/**
* _strcpy - copies the string pointed to by src into dest
* @dest: destination
* @src: source
* Return: char with copy of string
*/

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = *(src + i);
}
dest[i] = '\0';

return (dest);
}
=======
#include "main.h"
/**
* _strcpy - Copy paste string
*@dest: destination
*@src: source
*Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int inc = 0;
while (*(src + inc) != '\0')
{
*(dest + inc) = *(src + inc);
inc++;
}
*(dest + inc) = '\0';
return (dest);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
