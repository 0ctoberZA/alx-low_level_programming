#include "function_pointers.h"
/**
 * array_iterator - executes a function as a parameter on each element of an array.
 * @array: input array
 * @size: size of array
 * @action: pointer to action
 *
 * Return: 0 on success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
