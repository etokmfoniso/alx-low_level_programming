#include "main.h"
/**
 * -isdigit.c - checks if the nos is b/w 0 to 9
 *  @c: input number
 *  Return: if it's a number(0 - 9) i, otherwise 0
 */
int _isdigit(int c)
{
int i;
for (i = 48; i <= 50; i++)
	if(c == i)
		return 1;
	else
		return 0;

_putchar('\n');
}
