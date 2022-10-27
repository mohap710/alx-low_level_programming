#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: first strig
 * @s2: second string
 *
 * Return: 0 if match 1 if not
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
