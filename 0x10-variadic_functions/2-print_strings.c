#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
/**
* _puts - print a string to stdout.
* @str: pointer to array
* Return:
*/
void _puts(const char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(str[c]+'0');
	}
	_putchar('\n');
}

/**
* print_strings - print provided numbers.
* @n: numbers of argument
* @separator: string to be printed between strings.
* Return: nothing;
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *word;	

	if (n == 0)
		return;
/* Initializing argument to the list pointer */
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		word = va_arg(ptr, char *);
		if (word == NULL)
			word = "(nil)";

		_puts(word);
		if (separator != NULL)
			_puts(separator);
	}
	va_end(ptr);
	_putchar('\n');
}
