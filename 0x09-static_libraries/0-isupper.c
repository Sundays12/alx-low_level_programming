#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: The character that will be checked
 * Return: 1 if c is uppercas'e, 0 otherwise
 * Author: Oli
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
