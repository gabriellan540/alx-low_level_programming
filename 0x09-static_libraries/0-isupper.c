<<<<<<< HEAD
#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
=======
#include "main.h"
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
