#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - print alphabet in lowercase except 'q,e' using putchar
* Return:0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
