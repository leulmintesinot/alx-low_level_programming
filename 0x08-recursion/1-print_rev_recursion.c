#include "main.h"

/**
 * _print_rev_recursion - string in reverse
 * @s: the string in reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
