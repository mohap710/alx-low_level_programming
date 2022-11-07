#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum = 0;

	if (argc < 1)
		return (0);
	/* loop through the args */
	for (i = 1; i < argc; i++)
	{
		length = strlen(argv[i]);
		/* loop through the argv[i] to detect non-digits */
		for (j = 0; j < length; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
