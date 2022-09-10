#include <stdio.h>

/**
 * main - use putchar function
 *
 * Description: using main fuction
 * this program will prints lowercase and uppercase
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
		putchar(ch)
	}
	putchar('\n');
	return (0);
}
