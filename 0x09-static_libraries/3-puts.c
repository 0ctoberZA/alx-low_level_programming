#include "main.h"
#include <string.h>
/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
