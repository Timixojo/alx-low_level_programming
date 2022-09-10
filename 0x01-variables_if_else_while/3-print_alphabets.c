#include <stdio.h>

/**
 * main - use putchar function to print
 *
 * Description: using putchar function 
 * this program will prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
