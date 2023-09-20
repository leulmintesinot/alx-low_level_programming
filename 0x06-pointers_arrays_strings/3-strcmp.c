#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: the difference between the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
