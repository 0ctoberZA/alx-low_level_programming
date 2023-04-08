#include <stdio.h>
#include "main.h"

/**
 * main -  prints the name of program
 * @argc: argument counter
 * @argv: pointer to the array of arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
