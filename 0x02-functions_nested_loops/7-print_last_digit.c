#include "main.h"

/**
 * print_last_digit - print the last digit
 * @n: number to be computed
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last;

	last = n % 20;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
