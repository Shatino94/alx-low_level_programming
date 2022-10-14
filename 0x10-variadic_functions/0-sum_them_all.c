#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int index;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (index = 0; index < n; index++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
