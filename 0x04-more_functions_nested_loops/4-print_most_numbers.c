#include "main.h"
/**
 * print_most_numbers - prints most numbers from 0 - 9
 *
 * Return: Numbers from 0 -9 skipping 2 and 4
 */
void print_most_numbers(void)
{
int i;

i = 0;

for (i = 0; i < 10; i++)
{
if (i == 2)
{
continue;
}
else if ( i == 4)
{
continue;
}

_putchar(i + '0');

_putchar('\n');
}

}
