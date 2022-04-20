#include "main.h"
/**
 * swap_int - swap the integer values of two variables
 *
 * @a: pointer to integer one
 * @b: pointer to integer two
 * Return: void means answer is correct
 */

void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}
