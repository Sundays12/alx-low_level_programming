#include "main.h"
#include <stdio.h>

/**
 * void swap_int - swap the vaue of two intergers
 * @a - first interger to be swapped
 * @b - Second interger to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
