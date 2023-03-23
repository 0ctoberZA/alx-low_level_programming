#include "main.h"
/**
 * print_triangle - prints a triangle
 * Use the character #
 * @size: size is the size of the triangle
 *
 */
void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= siz; hash++)
		{
			for (index = size - hash; index > 0; index--)
				_putchar('_');

			for (index = 0; index < hash; index++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	putchar('\n');
}

