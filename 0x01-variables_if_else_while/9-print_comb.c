#include<stdio.h>

/**
 * main - printing a-z
 *
 * Return:0(success)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 67; i++)
	{
		putchar(i);
		if (i == 57)
		{
			putchar(i);
		} else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
