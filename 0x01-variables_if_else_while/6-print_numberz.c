#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print digits of base10 system
* Return:0
*/
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d%10+'0');
	}
	putchar('\n');
	return (0);
}
