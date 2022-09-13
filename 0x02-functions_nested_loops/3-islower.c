#include "main.h"
/**
 * int _islower - use return to check function
 * @c: is the int that will use for argument of the function
 * Description: using int _islower(int c) function
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

