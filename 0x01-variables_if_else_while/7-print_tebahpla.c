#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print alphabet in lowercase using putchar
* Return:0
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
