#include "main.h"

/**
 * _isupper - Checks for upper case charachter
 * @c: Character to be checked
 *
 * Return: on Success 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
