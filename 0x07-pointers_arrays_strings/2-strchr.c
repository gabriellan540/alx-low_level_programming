#include "main.h"

/**
 *  _strchr - finds c
 *  @s: pointer to char
 *  @c: char params to be found
 *  Return: *S
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}

