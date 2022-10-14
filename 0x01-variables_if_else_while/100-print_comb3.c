#include <stdio.h>
/**
 * main - main block
 * Description: Print numbers from 0 to 99.
 * Numbers must be separated by commas followed by a space.
 * You can only use `putchar` to print to console.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use variables of type `char`.
 * Return: 0
 */
int main(void)
{
	int d, first, last;

	for (d = 0; d < 100; d++)
	{
		first = d / 10;
		last = d % 10;

		if (first == last || first % 10 > last)
			continue;
		putchar(first + '0');
		putchar(last + '0');
		if (d < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
