#include "main.h"
/**
 * _strstr - locates a substring.
 * @needle: target substring to search for
 * @haystack: string to search
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, t;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			t = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[t] == needle[j])
					t++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
