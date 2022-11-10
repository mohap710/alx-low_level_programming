#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to init the array with
 * Return: NULL if size = 0 or failed to create
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));
	/* if malloc fails */
	if (ar == NULL)
		return (NULL);
	/* init the array with with char passed */
	i = 0;

	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
