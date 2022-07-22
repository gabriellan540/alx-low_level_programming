<<<<<<< HEAD
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
=======
#include "main.h"
/**
*_isalpha - controls if a character is alphabetical
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);

return (0);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
