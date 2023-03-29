#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @src: appends string
 * @dest: string to be appended to
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}