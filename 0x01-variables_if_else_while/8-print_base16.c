#include <stdio.h>
/**
 * main - use putchar function
 *
 * Description: using main function
 * this program prints number base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
