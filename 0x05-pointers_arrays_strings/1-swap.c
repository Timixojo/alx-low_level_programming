#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: parameter a
 * @b: parameter b
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
