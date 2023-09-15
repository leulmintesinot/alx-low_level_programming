#include "main.h"

/**
 * _isupper - check uppercase
 * @x: number checked
 * Return: 1 for upper or 0 for other
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
		return (1);
	}
	return (0);
}
