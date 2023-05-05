#include "main.h"
/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: unsigned number
 * @index: index within binary number
 *
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mark = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mark = ~(mark << index);
	*n = (*n & mark);

	return (1);
}
