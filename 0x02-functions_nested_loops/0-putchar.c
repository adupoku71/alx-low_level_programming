#include <main.h>
/**
 * main - prints putchar followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char xchar[] = "_putchar";
	int i = 0;

	while (xchar[i] != '\0')
	{
		_putchar(xchar[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
