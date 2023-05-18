#include <stdlib.h>
#include "main.h"

/**
 * *array_range - This creates an array of integers
 * @min: The min range of values stored
 * @max: The max range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptd;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptd = malloc(sizeof(int) * size);

	if (ptd == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptd[i] = min++;

	return (ptd);
}