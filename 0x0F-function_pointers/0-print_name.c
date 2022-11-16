#include "function_pointers.h"
#include <stddef.h>
/**
* print_name - swaps the values of two integers.
* @name: the name to print
* @f: function pointer to print name
* Return: nothing;
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
