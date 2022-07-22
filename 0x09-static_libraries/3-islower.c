<<<<<<< HEAD
#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
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
*_islower - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
