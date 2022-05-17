#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the args in the fxn
 * @n: Number of arguments in the function
 * @...: arguments in the function
 *
 * Return: returns 0 if n == 0, otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int n, sum = 0;

va_start(args, n);

for (i = 0; i < n; i++)
	if (n == 0)
		return 0;
	else
	{
		sum = sum + va_arg(args, int);
	}

va_end(args);

return (sum);
}
