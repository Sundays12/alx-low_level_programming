#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 * Auth: Oli
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
