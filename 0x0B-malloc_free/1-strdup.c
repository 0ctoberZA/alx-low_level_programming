#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return:
 */
char *_strdup(char *str)
{
	char *dupl_str;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		len++, i++;
	len++;

	dupl_str = malloc(sizeof(char) * len);

	if (dupl_str == NULL)
		return (NULL);

	i = 0;
	while (i < len)
	{
		*(dupl_str + i) = *(str + i);
		i++;
	}

	return (dupl_str);
}
