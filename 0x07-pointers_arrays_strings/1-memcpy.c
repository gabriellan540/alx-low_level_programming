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

