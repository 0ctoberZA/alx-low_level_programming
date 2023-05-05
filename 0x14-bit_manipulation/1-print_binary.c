#include "main.h"
/**
 * print_binary -  prints the binary representation of a number
 * @n: unsigned int
 *
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int xcopy = n, mark = 1;
	int len = 0;

	while (xcopy > 0)
	{
		len++;
		xcopy >>= 1;
	}

	len -= 1;

	if (len > 0)
		mark = mark << len;

	while (mark > 0)
	{
		if (n & mark)
			_putchar ('1');
		else
			_putchar('0');

		mark >>= 1;
	}
}
