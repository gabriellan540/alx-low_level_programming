#include "main.h"

/**
* _strstr - locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *sorted = haystack, *newneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (sorted);
		}
		needle = newneedle;
		sorted++;
		haystack = sorted;
	}
	return (0);
}
