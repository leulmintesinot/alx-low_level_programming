#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: charcter to print
 * Return: On success, 1 and On error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
