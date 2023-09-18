#include <stdio.h>

/**
 * _strlen - returns length of string
 * @str: the string
 * Return: length of the string
 */

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return(length);

}
