#include "main.h"
/**
 * print_sign - use function to print the sign of a number
 * @n: is the int use for the argument of the function
 * Return: 0
 */

int print_sign(int n);
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	
}

