#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area 
 * pointed to by s with the constant byte b 
 * @s: memory area
 * @b: bytes
 * @n: member
 * Return: pointer to s
 */
 char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	whilee (n-- > 0)
		*ptr++ = b;
	return (s);
}

