<<<<<<< HEAD
#include "main.h"

/**
 * _memcpy - copy
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}

=======
#include "main.h"
/**
*_memcpy - The _memcpy() function copies n bytes
* from memory area src to memory area dest
*@dest:area where bytes are copied to
*@src:area where bytes are copied from
*@n:number of bytes to copy
*Return: returns a pointer to n
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
