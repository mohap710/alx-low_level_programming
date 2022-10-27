#include "main.h"
#include "0-strcat.c"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * at most 'n' bytes from src
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: first string
 * @src: string to be appended to dest
 * @n: bytes to be used from src
 * Return: dest+src
 */

char *_strncat(char *dest, char *src, int n)
{
	int src_len = strlen(src);
	int i;

	/* make a pointer to point to the end of dest */
	char *ptr = dest + strlen(dest);

	/* stack smashing protection */
	if (n > src_len)
	{
		dest = _strcat(dest, src);
		return (dest);
	}
	/* append characters from src to dest */
	for (i = 0; i < n; i++, *ptr++)
	{
		*ptr = src[i];
	}

	/* null terminate src string if it has n or more bytes */
	if (src_len < n)
		*ptr = '\0';

	return (dest);
}
