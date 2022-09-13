#include "main.h"
/**
 * main - function to prints the alphabet, in lowercase
 *
 * Description: using main function
 * this program uses _putchar function to print alphabet in lowercase
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
