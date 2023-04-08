#include <Stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: argument counter
 * @argv: numbers to multiply
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum *= atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
