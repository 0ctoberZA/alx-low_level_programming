#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: Arrays to be reversed
 * @n: number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int store;

	while (start < n - 1)
	{
		store = a[n - 1];
		a[n - 1] = a[start];
		a[start] = store;
		n--;
		start++;
	}
}
