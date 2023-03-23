#include "main.h"
/**
 * print_square - prints a square using the character #
 * @size: The size of square
 *
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - l)
				continue;
			_putchar('\n')
		}
	}
	_putchar('\n')
}
