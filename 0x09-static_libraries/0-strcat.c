#include "main.h"
/**
 * _strcat - functions that concatenates two strings
 * @src: appends string
 * @dest: string to be appended to
 *
 * Return: concatenate string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
