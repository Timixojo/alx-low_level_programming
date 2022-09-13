#include "main.h"
/**
 * int _islower(int c) - use return to check function
 *
 * Description: using int _islower(int c) function
 * this program will check for lowercase character
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

