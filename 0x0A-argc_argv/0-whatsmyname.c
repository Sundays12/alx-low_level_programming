#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 * Auth: Oli
 */
int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}

