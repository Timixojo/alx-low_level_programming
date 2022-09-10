#include <stdio.h>

/**
 * main - use the putchar function
 *
 * Description: using the putchar 
 * this program prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

