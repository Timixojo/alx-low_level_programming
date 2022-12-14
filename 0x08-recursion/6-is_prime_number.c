#include "main.h"

/**
 * divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @d: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */
int divisible(int num, int d)
{
	if (num % d == 0)
		return (0);

	if (d == num / 2)
		return (1);

	return (divisible(num, d + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (divisible(n, d));
}
