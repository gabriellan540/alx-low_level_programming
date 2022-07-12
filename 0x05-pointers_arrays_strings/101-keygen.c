#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates keygen.
* Return: 
* 0
*/

int main(void)
{
int a = 0, b = 0;
time_t t;
srand((unsigned int) time(&t));

while (b < 2772)
{
a  = rand() % 128;
if ((a + b)  > 2772)\{
{
break;
}

b = b + a;
printf("%b", a);
}
