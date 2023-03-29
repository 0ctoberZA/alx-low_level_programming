#include "main.h"
/**
 * string_toupper - capitalize all letters in string
 * @s: String to manipulate
 *
 * Return: String with all letters caitalized
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}
