#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: input integer array
 * @size: number of elements in array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index where integer's found, if not found or array not present
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
