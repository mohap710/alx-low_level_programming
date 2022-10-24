#include "main.h"
#include "2-strlen.c"
/**
* print_rev - print a string to stdout.
* @s: pointer to array
* Return:
*/
void print_rev(char *s)
{
	int len = _strlen(s);

	for (len--; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
