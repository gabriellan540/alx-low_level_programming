#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - Entry point
* Return: Always 0
*/
int main(void)
{
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
putchar(lower);
putchar('\n');

return (0);
}
