#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: data to be measured
 * Return: length of @s
 */

int _strlrn(char *s)
{
	int i;

	i =  0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
