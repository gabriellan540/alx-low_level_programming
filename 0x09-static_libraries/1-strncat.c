<<<<<<< HEAD
#include "main.h"

/**
 * _strncat - concatenates two strings,
* @dest: destination
* @src: source
* @n: amount of bytes used from src
* Return: the pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
int count = 0, count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (count2 < n)
{
*(dest + count) = *(src + count2);

if (*(src + count2) == '\0')
{
break;
}
count++;
count2++;
}
return (dest);
}
=======
#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
