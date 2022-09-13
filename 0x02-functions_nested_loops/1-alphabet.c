#include "main.h"
/**
 * main - function _putchar to prints the alphabet, in lowercase
 *
 * Description: using void print_alphabet(void) function
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
