#include "main.h"
/**
 * -isdigit.c - checks if the nos is b/w 0 to 9
 *  @c: input number
 *  Return: if it's a number(0 - 9) i, otherwise 0
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
_putchar('\n');
}
