#include "main.h"
/**
 * print_line - prints line using underscore
 * @n: number of underscore to print
 * Return: return 0
 */
void print_line(int n)
{

int i;

if (n > 0)

{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}

_putchar('\n');

}

