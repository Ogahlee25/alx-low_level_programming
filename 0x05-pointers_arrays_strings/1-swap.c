#include "main.h"

/**
 * swap_int-Swaps the values of 2 integers.
 * @a:The first argument to be swapped.
 * @b:The second argument to be swapped.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;

}
