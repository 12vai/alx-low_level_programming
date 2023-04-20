#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: total arguments.
 *
 * Return: sum of its peremeter.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int v;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);

	for (v = 0; v < n; v++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
