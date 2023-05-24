#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -This prints each array of elements on a newline
 * @array: array
 * @size: how many elements to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array == NULL || action == NULL)
		return;

	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
