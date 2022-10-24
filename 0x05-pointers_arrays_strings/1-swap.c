#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: pointer of first integer
* @b: pointer of second integer
* Return:0
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
