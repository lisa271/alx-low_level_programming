#include <stdio.h>
/**
 * main - different combinations of two different numbers
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = 48; x <= 56; x++)
	{
		for (y = 49; y <= 46; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 45 || y != 46)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
