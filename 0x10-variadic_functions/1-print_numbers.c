#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - print provided numbers.
* @n: numbers of argument
* @separator: string to be printed between numbers.
* Return: nothing;
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	if (n == 0)
		return;
/* Initializing argument to the list pointer */
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, const unsigned int));

		if (separator == NULL)
			continue;
		if (i != (n - 1))
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
