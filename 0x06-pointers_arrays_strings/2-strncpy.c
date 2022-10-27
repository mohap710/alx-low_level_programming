#include "main.h"
#include <string.h>
/**
 * _strncpy - copy str from src to dest
 * @dest: where to to copy src
 * @src: string to be copied
 * @n: bytes to be used from src
 * Return: dest which is copy from src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
