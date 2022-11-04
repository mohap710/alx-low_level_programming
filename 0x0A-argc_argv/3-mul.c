#include <stdio.h>
#include <stdlib.h>
/**
 * main -multiply two numbers passed in args
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 for success 1 for failure
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int result, arg1, arg2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	result = arg1 * arg2;
	printf("%d\n", result);

	return (0);
}
