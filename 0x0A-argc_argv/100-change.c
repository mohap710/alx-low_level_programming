#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, num = 0;
	double total, cents = 0;
	int coins[] = {25, 10, 5, 2, 1};

	/* if not excatly 2 args terminate  */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* if arg passed is negative return 0 */
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	total = atoi(argv[1]);
	while (total != cents)
	{
		i = 0;
		while (i < 5)
		{
			if ((coins[i] + cents) > total)
				i++;

			else
			{
				cents += coins[i];
				num++;
			}
		}
	}
	printf("%d\n", num);
	return (0);
}
