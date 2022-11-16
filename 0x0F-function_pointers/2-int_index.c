#include <stddef.h>
#include "function_pointers.h"
/**
* int_index - search for element in an array.
* @array: array to search within
* @size: size of array
* @cmp: function pointer to compare values
* Return: index || -1 if size <= 0 or no element match ;
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL ||  cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	/* If not found*/
	return (-1);
}
