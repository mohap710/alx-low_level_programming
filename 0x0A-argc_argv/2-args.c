#include <stdio.h>

/**
 * main - print all arguments passed
 * @argc: argument count
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
