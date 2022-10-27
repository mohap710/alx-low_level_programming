#include "main.h"
/**
 * string_toupper - convert lowercase to upper
 * @c: string
 * Return: string all Upper case
*/

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			/* substract 32 from ASCII to convert to Uppercase */
			c[i] = c[i] - 32;
	}

	return (c);
}
