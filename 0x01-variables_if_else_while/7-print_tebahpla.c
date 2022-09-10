#include <stdio.h>
/**
 * main - use putchar function
 *
 * Description: using main function
 * this program prints alphabet in reverse order
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
