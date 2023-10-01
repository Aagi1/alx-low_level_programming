#include <stdio.h>
#include "main.h"

/**
 * print_binary - converti de decimale en binaire
 * @n: Le nombre decimale a convertir
 *
 * return - void mais rien si c'est 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int i, taille;
	int premierZero = 1;

	taille = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp > 0)
	{
		temp >>= 1;
		taille++;
	}

	for (i = taille - 1; i >= 0; i--)
	{
		unsigned long int masse = 1UL << i;
		char bit = (n & masse) ? '1' : '0';

		if (bit == '1')
		{
			premierZero = 0;
		}

		if (premierZero == 0)
		{
			_putchar(bit);
		}
	}
}
