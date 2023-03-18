#include <stdio.h>
/**
 * main -  prints all single digit numbers of base 10 starting from 0
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar(num'\n');

	return (0);
}
