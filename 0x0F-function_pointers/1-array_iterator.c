#include <stddef.h>
#include "function_pointers.h"
/**
* array_iterator - executes a function given on each element of an array.
* @array: array to iterate within
* @size: size of array
* @action: function pointer to print element from the array
* Return: nothing;
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
