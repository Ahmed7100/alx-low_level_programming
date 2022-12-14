#include "main.h"

/**
 * _memset - fill and byte of memory with a constant value
 * @s: pointer to memory area
 * @b: constant value
 * @n: number of byte to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
