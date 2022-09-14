#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: parameter for int argument
 * Return: 0
 */
void print_times_table(int n)
{
	int digit, mult, result;

	if (n <= 15 && n >= 0)
	{
		for (digit = 0; digit <= n; digit++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				result = digit * mult;

				if (result <= 15)
					_putchar(' ');
				else
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
			}
			_putchar('\n')
		}
	}
}
