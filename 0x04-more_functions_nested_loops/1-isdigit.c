#include "main.h"

/**
 * _isdigit - check for digits
 * @x: to be checked
 * Return:  1 for digit or 0
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
