#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings.
 * @src: first string
 * @dest: string to be appended to src
 * Return: dest+src
 */

char *_strcat(char *dest, char *src)
{
	/* make a pointer to point to the end of dest */
	char *ptr = dest + strlen(dest);

	/* append characters from src to dest */
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}

	/* null terminate dest string */
	*ptr = '\0';
	return (dest);
}
