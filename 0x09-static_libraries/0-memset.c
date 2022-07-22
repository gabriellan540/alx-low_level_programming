<<<<<<< HEAD
#include "main.h"

/**
 * _memset - fills first n bytes of memory
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a= 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

=======
#include "main.h"
/**
*_memset - The _memset() function fills
* the first n bytes of the memory area
* pointed to by s with the constant byte b
*@s:target
*@b: constant byte
*@n:number of byte
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
