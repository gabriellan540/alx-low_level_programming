#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int b, c, rev;

	for (b = 0; b < n - 1; b++)

	{

		for (c = b + 1; c > 0; c--)
		{
			rev = *(a + c);
			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = rev;
		}
	}
}
