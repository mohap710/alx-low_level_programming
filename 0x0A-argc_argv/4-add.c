#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -add positive numbers passed in args
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0 for success 1 for failure
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int result = 0, i = 1;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (!atoi(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
