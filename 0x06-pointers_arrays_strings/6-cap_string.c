#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *s)
{
	int num = 0, a;
	int words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + num) >= 97 && *(s + num) <= 122)
		*(s + num) = *(s + num) - 32;
	num++;
	while (*(s + num) != '\0')
	{
		for (a = 0; a < 13; a++)
		{
			if (*(s + num) == words[a])
			{
				if ((*(s + (num + 1)) >= 97) && (*(s + (num + 1)) <= 122))
					*(s + (num + 1)) = *(s + (num + 1)) - 32;
				break;
			}
		}
		num++;
	}
	return (s);
}
