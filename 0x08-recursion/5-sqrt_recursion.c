#include "main.h"
/**
 * _sqrt_recursion - return the natural square root of a number
 * @c: number to detrmine if square rrot
 * @i: increment to compare against c
 * Return: if no natural square root, return -1 else square root
 */
int halp(int c, int i);

int _sqrt_recursion(int n)
{
return (halp(n, 1));
}

/**
 * halp - function to solve sqrt_recursion
 * @c: number to determine if square root
 * @i: increment to compare against c
 * Return: square root if natural or -1 if none found
 */

int halp(int c, int i)
{
int square;

square = i * i;
if (square == c)
return (i);
else if (square < c)
return (halp(c, i + 1));
else
return (-1);
}
