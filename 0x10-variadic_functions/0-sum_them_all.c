#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum provided int.
* @n: numbers of int
* Return: sum Or 0 if n = 0;
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
/* Initializing argument to the list pointer */
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, unsigned int);
	}
	va_end(ptr);
	return (sum);
}
