#include "main.h"

/**
 * print_array - a function that ptints n elements of an array
 * @s: array name
 * @n: is the number of elemnts OF the array to be printed
 * Return: return a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
