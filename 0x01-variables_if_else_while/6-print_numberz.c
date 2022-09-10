#include <stdio.h>
/**
 * main - use putchar function
 *
 * Description: using main function
 * this program prints single digit number base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%i", i);
	}
	putchar("\n");
	return (0);
}
