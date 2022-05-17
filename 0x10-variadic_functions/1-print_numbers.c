#include "variadic_function.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints all the numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function 
 *
 * Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (i != (n - 1) && seperator != NULL)
	printf("%s", seperator);
}
printf("\n");

va_end(args);
}
