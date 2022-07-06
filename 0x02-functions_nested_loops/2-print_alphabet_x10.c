#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: nothing void function
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
