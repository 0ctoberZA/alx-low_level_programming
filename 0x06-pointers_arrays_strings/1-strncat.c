#include "main.h"
/**
 * _strncat - function that  concatenates two strings
 * @src: string to append
 * @dest: string to be appended to
 * @n: append n number of bytes(chars)
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*dest)
		dest++;
	
	for (i = 0; i < n; i++)
	{
		while (*src)
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
	}
}
