#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * ch_free_grid - frees a 2d array
 * @grid: multidimensional array of char
 * @height: height of the array
 *
 * Return: 0
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: Pointer of an array of integers
 */
char **strtow(char *str)
{
	char **tab;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;

	tab = malloc((height + 1) * sizeof(char *));
	if (tab == NULL || height == 0)
	{
		free(tab);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				tab[i] = malloc((c - a1 + 2) * sizeof(char));
				if (tab[i] == NULL)
				{
					ch_free_grid(tab, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			tab[i][j] = str[a1];
		tab[i][j] = '\0';
	}
	tab[i] = NULL;
	return (tab);
}
