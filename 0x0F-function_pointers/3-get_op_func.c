
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - matches operator from main
 * @s: op str
 * Return: 0
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (op_s[i].op)
	{
		if (*s == *(op_s[i].op))
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
