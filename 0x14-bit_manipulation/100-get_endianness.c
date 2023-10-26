#include "main.h"
/**
 * get_endianness - check system byte order
 * Return: 0 if big and 1 if small endian
 */
int get_endianness(void)
{
	int x = 1;
	int small_or_big;

	small_or_big = (int) (((char *) &x)[0]);
	return (small_or_big);
}
