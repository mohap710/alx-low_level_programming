#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add two numbers
 * @a: input one
 * @b: input two
 * Return: result of a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two numbers
 * @a: input one
 * @b: input two
 * Return: result of a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: input one
 * @b: input two
 * Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: input one
 * @b: input two
 * Return: result of a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mod two numbers
 * @a: input one
 * @b: input two
 * Return: result of a%b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
