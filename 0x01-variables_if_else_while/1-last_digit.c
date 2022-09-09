#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print variable n
 *
 * Description: this program will prints the last digit of the number n
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes here */
	if (l > 5)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

