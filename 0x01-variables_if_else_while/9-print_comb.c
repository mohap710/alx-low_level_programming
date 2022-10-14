#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print digits of base10 followed by ', '
* Return:0
*/
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
