#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: target match
 *
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
