<<<<<<< HEAD
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
=======
#include "main.h"
/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
