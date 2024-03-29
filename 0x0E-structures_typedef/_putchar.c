#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 On success
 * On error, return -1, and set errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
