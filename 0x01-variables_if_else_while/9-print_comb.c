#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: 0
*/

int main(void)
{
int d ;

for (d = '0'; d <= '9'; d++)
{
putchar(d);
if (d != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return(0);
}
