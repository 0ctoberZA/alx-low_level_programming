#include "main.h"
/**
 * *_strchr - locates a character in a string.
 * @c: target character
 * @s: string to search
 *
 * Return: pointer to the character in string
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) && *(s + i) != c)
		i++;
	if (*(s + i) == c)
		return (s + i);
	else
		return (NULL);
}
