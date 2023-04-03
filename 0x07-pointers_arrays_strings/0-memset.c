#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @n: number of bytes to fill
 * @s: Pointer to memory area
 * @b: constant value
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}
	return (s);
}
