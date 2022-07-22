<<<<<<< HEAD
#include "main.h"

/**
* _strcat - concatenates two strings,
* @dest: destination.
* @src: source
* Return: the pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int count = 0, count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (count2 >= 0)
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
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
