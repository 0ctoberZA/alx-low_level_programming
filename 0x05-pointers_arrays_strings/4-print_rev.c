#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @str: string to reverse 
 *
 */
void print_rev(char *s)
{
	int len;
	int i;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	s--;

	for (i = len; i > 0; i--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
