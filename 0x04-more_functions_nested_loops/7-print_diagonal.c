#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		int i, j;

		for (i = -; i < n; i++)
		{
			for (j = 0; j < n; j++
