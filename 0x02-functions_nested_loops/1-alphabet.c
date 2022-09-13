#include "main.h"
/**
 * print_alphabet - function _putchar to prints
 *
 * Description: using print_alphabet(void) function
 * this program prints the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
