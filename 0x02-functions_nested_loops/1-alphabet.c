#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 *
 * Return:always 0 (success)
 */

void print_alphabet(void);

char letter = 'a';

while (letter <= 'z')
{
	_putchar(letter);
	letter++;
}
_putchar('\n');

}
