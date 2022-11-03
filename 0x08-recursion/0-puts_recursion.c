#include "main.h"
/**
 * puts_recursion - prints a string, followed by a new line.
 * @s: string
*/
{
	if (*s)
	{
		_putchar (*s);
		_puts_recursion (s + 1);
	}
	else
		_putchar ('\n');
}
