#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

va_list letters;
char *letter;
unsigned int i;

va_start(letters, n);

for (i = 0; i < n; i++)
{
letter = va_arg(letters, char *);
if (letter == NULL)
	printf("(nil)");
else
	printf("%s", letter);

if (i != (n - 1) && separator != NULL)
	printf("%s", separator);
}

printf("\n");

va_end(letters);

}
