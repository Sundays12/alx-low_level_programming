#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - entry point
 * @argc: character
 * @argv: character
 *
 * Description: -prints error followed by a new line
 * Return: - 1
 * Auth: Oli
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	if (argc != 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < (int)strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
