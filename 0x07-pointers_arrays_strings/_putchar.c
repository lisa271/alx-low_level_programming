#include <unistd.h>
/**
 * _putchar - putchar
 * @c: char to stdout
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
