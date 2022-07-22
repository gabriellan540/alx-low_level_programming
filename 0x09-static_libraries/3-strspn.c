<<<<<<< HEAD
#include "main.h"

/**
 *  _strspn - Gets the length of a prefix substring
 *  @s: String where the substring will look
 *  @accept: Substring of accepted chars
 *   Return: Length of occurrence
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	char *b = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				a++;
				break;
			}
		}
		if (!(*--accept))
		{
			break;
		}
		accept = b;
	}
	return (a);
	}

=======
#include "main.h"
/**
*_strspn - search the number of bytes in the initial
* segment of s which consist only of bytes from accept
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
