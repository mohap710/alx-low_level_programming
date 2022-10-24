#include "main.h"
#include <stdio.h>
/**
* _strlen - get the length of the string.
* @s: pointer to the fitst char of array
* Return:0
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
