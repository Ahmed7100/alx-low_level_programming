#include <stdio.h>

/**
 * main - printing a - z
 *
 * Return:0(success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
