#include "main.h"

/*
 * print-alphabet - a function that prints the alphabeths in lower case
 *
 * Return: Always 0 (success)
 *
 */

void print_alphabet(void);
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');

}
