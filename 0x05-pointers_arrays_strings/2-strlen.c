#include "main.h"
#include <stdio.h>

/**
 * int _strlen - returns the length of the string
 * @s: string
 *
 * Return: string lengt
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}
