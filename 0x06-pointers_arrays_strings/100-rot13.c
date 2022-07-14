#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *s)
{
	int num = 0, a;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + num) != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (*(s + num) == alphabet[a])
			{
				*(s + num) = rot13[a];
				break;
			}
		}
		num++;
	}

	return (s);
}
