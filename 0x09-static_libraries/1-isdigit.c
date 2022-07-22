<<<<<<< HEAD
#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
*_isdigit - function that verifies if a  character is a digit or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
>>>>>>> ebd4c156b0fffac8b2a997219941d9a5b0e2b036
