#include "main.h"

/**
 * print_binary - afficher le nombre equivalent of a decimal number
 * @n: nombre d’affichage in binary
 */
void print_binary(unsigned long int n)
{
	int i, compter = 0;
	unsigned long int currents;

	for (i = 63; i >= 0; i--)
	{
		currents = n >> i;

		if (currents & 1)
		{
			_putchar('1');
			compter++;
		}
		else if (compter)
			_putchar('0');
	}
	if (!compter)
		_putchar('0');
}
