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

