#include "main.h"
/**
 * more_numbers - prints a set of numbers 10 times 
 *
 * Return: always return 0
 */
void more_numbers(void)
{
int i, j, a;

for(a = 0; a < 10; a++)
{
for (i = 0; i <= 1; i++)
{
for (j = 0; j <= 9; j++)
{
if (!(i == 1 && j >=5))
{
if (i)
_putchar(i + '0');
_putchar(j + '0');
}
}
}
_putchar('\n');
}
}
