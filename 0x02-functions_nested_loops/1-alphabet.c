#include "main.h"
/**
 * print_alphabet - prints all alphabets in lower cases
 * Return: returns nothing
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
