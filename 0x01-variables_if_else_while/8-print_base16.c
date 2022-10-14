#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print digits of base16 system
* Return:0
*/
int main(void)
{
	int d;
	char c;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
