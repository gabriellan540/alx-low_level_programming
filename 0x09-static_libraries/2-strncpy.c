<<<<<<< HEAD
#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination
* @src: source
* @n: amount of bytes from src
* Return: the pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int a;

for (a = 0; a < n && src[a]  != '\0'; a++) 
{
dest[a] = src[a];
}

for ( ; a < n; a++)
{
dest[a] = '\0';
}
  
return (dest);
}
=======
#include "main.h"
/**
*  _strncpy - C function that copies a string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
