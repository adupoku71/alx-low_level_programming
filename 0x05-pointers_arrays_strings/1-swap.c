#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: pointer parameter to integer value
 * @b: pointer parameter to integer value
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
