#iclude "main.h"
/**
 * main -  prints 10 times the alphabet, in lowercase.
 *
 * Return: always 0 (success)
 */

void print_alphabet_x10(void);
{
int round = 0;

char letter = 'a';

while (round < 10)
{
	letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		lettter++;
	}
	_putchar('\n');

	round++;
}
}
