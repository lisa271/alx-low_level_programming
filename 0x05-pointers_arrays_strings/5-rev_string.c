#include "main.h"
/**
 * rev_string - reverse string
 * _putchar - print each character
Return: 0
*/
void rev_string(char *s)
{
	int a = 0, b, c;
	char ch;

	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;
	for (b = 0; c >= 0 && b < c; c--, b++)
		{
			ch = s[b];
			s[b] = s[c];
			s[c] = ch;
		}
}


