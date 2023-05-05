#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned int
 * @index: index within binary  number.
 *
 * Result: bit 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
