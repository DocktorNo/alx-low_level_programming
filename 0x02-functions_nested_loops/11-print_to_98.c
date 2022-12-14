#include <stdio.h>
#include "main.h"

/**
 * print_to_98 -> prints all natural numbers from n to 98
 * followed by a new line
 * @n: print from this number
 * Description: prints all natural numbers from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
