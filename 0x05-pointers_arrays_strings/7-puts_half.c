#include "main.h"
#include "2-strlen.c"
/**
* puts_half - prints half of a string
* @str: pointer to array
* Return:
*/
void puts_half(char *str)
{
	int c, half;
	int len = _strlen(str);

	if (len % 2 == 1)
	{
		half = ((len - 1) / 2) + 1;
	}
	else
	{
		half = len / 2;
	}

	for (c = half; str[c] != '\0'; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
