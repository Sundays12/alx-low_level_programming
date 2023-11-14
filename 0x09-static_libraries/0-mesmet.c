#include "main.h"

/**
 * _mesmet - fills the memory with a constant byte
 * @s - memery area
 * @b - byte
 * @n - bytes to be filled
 * Return: pointer to destination
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
