#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 *
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
